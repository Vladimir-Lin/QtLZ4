/****************************************************************************
 *
 * Copyright (C) 2001~2016 Neutrino International Inc.
 *
 * Author   : Brian Lin ( Foxman , Vladimir Lin , Vladimir Forest )
 * E-mail   : lin.foxman@gmail.com
 *          : lin.vladimir@gmail.com
 *          : wolfram_lin@yahoo.com
 *          : wolfram_lin@sina.com
 *          : wolfram_lin@163.com
 * Skype    : wolfram_lin
 * WeChat   : 153-0271-7160
 * WhatsApp : 153-0271-7160
 * QQ       : lin.vladimir@gmail.com
 * URL      : http://qtlz4.sourceforge.net/
 *
 * QtLZ4 acts as an interface between Qt and QuickLZ library.
 * Please keep QtLZ4 as simple as possible.
 *
 * Copyright 2001 ~ 2016
 *
 ****************************************************************************/

#ifndef QT_LZ4_H
#define QT_LZ4_H

#include <QtCore>
#ifndef QT_STATIC
#include <QtScript>
#endif

QT_BEGIN_NAMESPACE

#ifndef QT_STATIC
#  if defined(QT_BUILD_QTLZ4_LIB)
#    define Q_LZ4_EXPORT Q_DECL_EXPORT
#  else
#    define Q_LZ4_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define Q_LZ4_EXPORT
#endif

#define QT_LZ4_LIB 1

class Q_LZ4_EXPORT QtLZ4 ;

class Q_LZ4_EXPORT QtLZ4
{
  public:

    explicit     QtLZ4            (void) ;
    virtual     ~QtLZ4            (void) ;

    virtual bool isLZ4            (QByteArray & header) ;

    virtual void CleanUp          (void) ;

    virtual bool IsCorrect        (int returnCode) ;
    virtual bool IsEnd            (int returnCode) ;
    virtual bool IsFault          (int returnCode) ;

    // Compression functions

    virtual int  BeginCompress    (int level = 9,int method = 0) ;
    virtual int  BeginCompress    (QVariantList arguments = QVariantList() ) ;
    virtual int  doCompress       (const QByteArray & Source      ,
                                         QByteArray & Compressed) ;
    virtual int  doSection        (      QByteArray & Source      ,
                                         QByteArray & Compressed) ;
    virtual int  CompressDone     (QByteArray & Compressed) ;

    // Decompression functions

    virtual int  BeginDecompress  (void) ;
    virtual int  doDecompress     (const QByteArray & Source        ,
                                         QByteArray & Decompressed) ;
    virtual int  undoSection      (      QByteArray & Source        ,
                                         QByteArray & Decompressed) ;
    virtual int  DecompressDone   (void) ;

    virtual bool IsTail           (QByteArray & header) ;

  protected:

    void * lz4Packet ;

    virtual void CompressHeader   (QByteArray & Compressed) ;
    virtual void CompressTail     (unsigned int checksum,QByteArray & Compressed) ;
    virtual int  DecompressHeader (const QByteArray & Source) ;

  private:

} ;

QT_END_NAMESPACE

#endif
