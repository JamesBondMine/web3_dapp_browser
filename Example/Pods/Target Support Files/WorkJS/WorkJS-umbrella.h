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

#import "FlutterManager.h"
#import "FlutterManagerModel.h"

FOUNDATION_EXPORT double WorkJSVersionNumber;
FOUNDATION_EXPORT const unsigned char WorkJSVersionString[];

