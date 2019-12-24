//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString;

@interface TIMLongConnectionRequest : NSObject
{
    int _method;
    int _service;
    unsigned long long _sequenceId;
    unsigned long long _logId;
    NSData *_payload;
    NSString *_payloadType;
    NSString *_payloadEncoding;
    unsigned long long _maxPayloadByteSize;
    NSDictionary *_headers;
    CDUnknownBlockType _successCompletionBlock;
    CDUnknownBlockType _failureCompletionBlock;
    CDUnknownBlockType _mappingBlock;
    CDUnknownBlockType _filterBlock;
    CDUnknownBlockType _beforeFilterBlock;
    CDUnknownBlockType _errorInMappedResponseBlock;
    double _timeout;
}

+ (Class)callbackClass;
+ (id)requestWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(copy, nonatomic) CDUnknownBlockType errorInMappedResponseBlock; // @synthesize errorInMappedResponseBlock=_errorInMappedResponseBlock;
@property(copy, nonatomic) CDUnknownBlockType beforeFilterBlock; // @synthesize beforeFilterBlock=_beforeFilterBlock;
@property(copy, nonatomic) CDUnknownBlockType filterBlock; // @synthesize filterBlock=_filterBlock;
@property(copy, nonatomic) CDUnknownBlockType mappingBlock; // @synthesize mappingBlock=_mappingBlock;
@property(copy, nonatomic) CDUnknownBlockType failureCompletionBlock; // @synthesize failureCompletionBlock=_failureCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType successCompletionBlock; // @synthesize successCompletionBlock=_successCompletionBlock;
@property(copy, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(nonatomic) unsigned long long maxPayloadByteSize; // @synthesize maxPayloadByteSize=_maxPayloadByteSize;
@property(copy, nonatomic) NSString *payloadEncoding; // @synthesize payloadEncoding=_payloadEncoding;
@property(copy, nonatomic) NSString *payloadType; // @synthesize payloadType=_payloadType;
@property(copy, nonatomic) NSData *payload; // @synthesize payload=_payload;
@property(nonatomic) int service; // @synthesize service=_service;
@property(nonatomic) int method; // @synthesize method=_method;
@property(nonatomic) unsigned long long logId; // @synthesize logId=_logId;
@property(nonatomic) unsigned long long sequenceId; // @synthesize sequenceId=_sequenceId;
- (void).cxx_destruct;
- (void)willSend;
- (_Bool)send;
- (id)init;

@end
