
#import <Foundation/Foundation.h>

@interface FlutterManagerModel : NSObject

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *desc;

-(void)log;

-(void)logModel;

@end
