//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IESGurdTraceMessageInfo : NSObject
{
    _Bool _hasError;
    NSString *_accessKey;
    NSString *_channel;
    NSString *_message;
}

+ (id)messageInfoWithAccessKey:(id)arg1 channel:(id)arg2 message:(id)arg3 hasError:(_Bool)arg4;
@property(nonatomic) _Bool hasError; // @synthesize hasError=_hasError;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(copy, nonatomic) NSString *accessKey; // @synthesize accessKey=_accessKey;
- (void).cxx_destruct;

@end
