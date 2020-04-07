//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PDFCJSScriptDescriptor, PSPDFJSEnvironment;

@interface PSPDFJSScriptDescriptor : NSObject
{
    NSString *_uuid;
    NSString *_contents;
    NSString *_filePath;
    PSPDFJSEnvironment *_environment;
    PDFCJSScriptDescriptor *_coreJSScriptDescriptor;
}

@property(readonly, nonatomic) PDFCJSScriptDescriptor *coreJSScriptDescriptor; // @synthesize coreJSScriptDescriptor=_coreJSScriptDescriptor;
@property(readonly, nonatomic) PSPDFJSEnvironment *environment; // @synthesize environment=_environment;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(copy, nonatomic) NSString *contents; // @synthesize contents=_contents;
@property(readonly, copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoreJSScriptDescriptor:(id)arg1;
- (id)initWithUuid:(id)arg1 environment:(id)arg2;

@end
