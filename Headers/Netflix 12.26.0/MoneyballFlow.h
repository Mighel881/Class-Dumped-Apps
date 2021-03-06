//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface MoneyballFlow : NSObject
{
    NSString *_flow;
    NSString *_mode;
    NSString *_errorCode;
    NSDictionary *_flowData;
}

+ (void)fetchPhoneCodesWithFalcorModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)restoreFrom:(id)arg1 falcorModel:(id)arg2 receipt:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)requestNextModeFrom:(id)arg1 falcorModel:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)requestWelcomeDataWithFalcorModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)execute:(id)arg1 withFalcorModel:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) NSDictionary *flowData; // @synthesize flowData=_flowData;
@property(retain, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSString *flow; // @synthesize flow=_flow;
- (void).cxx_destruct;
- (id)asDictionary;
- (id)abTests;
- (id)cached:(id)arg1;
- (id)field:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

