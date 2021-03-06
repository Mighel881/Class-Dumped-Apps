//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASTCCLClientOp-Protocol.h"

@class NSArray, NSString;
@protocol ASTAssistantClientDataSource, ASTCCLClientOpExecutor;

@interface ASTCCLUIShowSRPClientOp : NSObject <ASTCCLClientOp>
{
    id <ASTAssistantClientDataSource> _dataSource;
    id <ASTCCLClientOpExecutor> _executor;
}

+ (id)showSRPProperties;
+ (id)defaultSupportedClientOp;
@property(nonatomic) __weak id <ASTCCLClientOpExecutor> executor; // @synthesize executor=_executor;
@property(nonatomic) __weak id <ASTAssistantClientDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)performClientOperation:(id)arg1 interationID:(int)arg2 deviceSpecificRendering:(id)arg3 statusCallback:(CDUnknownBlockType)arg4;
- (id)allPossibleSupportedClientOps;
@property(readonly, nonatomic) NSArray *supportedClientOps;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

