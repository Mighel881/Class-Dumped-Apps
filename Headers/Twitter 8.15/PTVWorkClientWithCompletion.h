//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PeriscopeSDK/PTVWorkClientDelegate-Protocol.h>

@class NSString;

@interface PTVWorkClientWithCompletion : NSObject <PTVWorkClientDelegate>
{
    id _context;
    CDUnknownBlockType _load;
    CDUnknownBlockType _immediate;
    CDUnknownBlockType _eventual;
    CDUnknownBlockType _error;
}

@property(copy, nonatomic) CDUnknownBlockType error; // @synthesize error=_error;
@property(copy, nonatomic) CDUnknownBlockType eventual; // @synthesize eventual=_eventual;
@property(copy, nonatomic) CDUnknownBlockType immediate; // @synthesize immediate=_immediate;
@property(copy, nonatomic) CDUnknownBlockType load; // @synthesize load=_load;
@property(retain, nonatomic) id context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)error:(id)arg1 context:(id)arg2;
- (void)eventual:(id)arg1 context:(id)arg2;
- (void)immediate:(id)arg1 context:(id)arg2 loadingFromNetwork:(_Bool)arg3;
- (void)load:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
