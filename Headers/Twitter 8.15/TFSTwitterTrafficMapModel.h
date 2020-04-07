//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFSTwitterCore/NSCoding-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSString;

@interface TFSTwitterTrafficMapModel : NSObject <NSCoding>
{
    NSString *_configurationKey;
    NSString *_configurationValue;
    NSDate *_expirationDate;
    NSDate *_pollAfterDate;
    NSArray *_probeURLStrings;
    unsigned long long _maxProbeURLStringsPerSession;
    NSArray *_validationURLStrings;
    NSDictionary *_rewriteMap;
}

+ (id)rewriteMapFromResponseRewriteMapArray:(id)arg1 error:(id *)arg2;
+ (id)modelWithResponseDictionary:(id)arg1;
+ (id)modelWithResponseData:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *rewriteMap; // @synthesize rewriteMap=_rewriteMap;
@property(readonly, copy, nonatomic) NSArray *validationURLStrings; // @synthesize validationURLStrings=_validationURLStrings;
@property(readonly, nonatomic) unsigned long long maxProbeURLStringsPerSession; // @synthesize maxProbeURLStringsPerSession=_maxProbeURLStringsPerSession;
@property(readonly, copy, nonatomic) NSArray *probeURLStrings; // @synthesize probeURLStrings=_probeURLStrings;
@property(readonly, nonatomic) NSDate *pollAfterDate; // @synthesize pollAfterDate=_pollAfterDate;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSString *configurationValue; // @synthesize configurationValue=_configurationValue;
@property(copy, nonatomic) NSString *configurationKey; // @synthesize configurationKey=_configurationKey;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryValue;
- (id)initWithDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithExpirationDate:(id)arg1 pollAfterDate:(id)arg2 probeURLStrings:(id)arg3 maxProbeURLStringsPerSession:(unsigned long long)arg4 validationURLStrings:(id)arg5 rewriteMap:(id)arg6;

@end
