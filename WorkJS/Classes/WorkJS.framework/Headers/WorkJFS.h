
#import <Foundation/Foundation.h>

@interface WorkJFS : NSObject

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *desc;

-(void)log;

-(void)logModel;

@end
