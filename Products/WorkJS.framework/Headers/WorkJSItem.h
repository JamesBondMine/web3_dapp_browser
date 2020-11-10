//
//  WorkJS.h
//  WorkJS
//
//  Created by 牛路伽 on 2020/11/9.
//


#import <Foundation/Foundation.h>

@interface WorkJSItem : NSObject

@property (readwrite, strong) NSURL * title;

-(instancetype)initWithTitle:(NSString *)title;

-(void)loadTitle;

@end
