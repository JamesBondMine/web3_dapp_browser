
#import <Foundation/Foundation.h>

@interface FlutterModel : NSObject

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *desc;

-(void)log;

-(void)logModel;

@end
