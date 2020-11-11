#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "FlutterQrReaderPlugin.h"
#import "QrReaderViewController.h"

FOUNDATION_EXPORT double flutter_qr_readerVersionNumber;
FOUNDATION_EXPORT const unsigned char flutter_qr_readerVersionString[];

