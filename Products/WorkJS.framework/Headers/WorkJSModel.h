//
//  WorkJS.h
//  WorkJS
//
//  Created by 牛路伽 on 2020/11/9.
//


#import <Foundation/Foundation.h>

@interface WorkJSModel : NSObject

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *desc;

-(void)log;

-(void)logModel;

@end
