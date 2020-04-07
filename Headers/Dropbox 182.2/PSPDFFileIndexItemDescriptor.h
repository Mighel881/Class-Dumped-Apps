//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PSPDFKit/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface PSPDFFileIndexItemDescriptor : NSObject <NSSecureCoding>
{
    _Bool _annotationsIndexed;
    NSString *_documentPath;
    NSString *_documentUID;
    NSDate *_lastModificationDate;
    long long _spotlightType;
}

+ (_Bool)supportsSecureCoding;
+ (id)descriptorWithDocumentPath:(id)arg1 UID:(id)arg2 lastModificationDate:(id)arg3 annotationsIndexed:(_Bool)arg4 spotlightType:(long long)arg5;
@property(readonly, nonatomic, getter=areAnnotationsIndexed) _Bool annotationsIndexed; // @synthesize annotationsIndexed=_annotationsIndexed;
@property(readonly, nonatomic) long long spotlightType; // @synthesize spotlightType=_spotlightType;
@property(readonly, nonatomic) NSDate *lastModificationDate; // @synthesize lastModificationDate=_lastModificationDate;
@property(readonly, nonatomic) NSString *documentUID; // @synthesize documentUID=_documentUID;
@property(readonly, nonatomic) NSString *documentPath; // @synthesize documentPath=_documentPath;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToFileIndexItemDescriptor:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDocumentPath:(id)arg1 UID:(id)arg2 lastModificationDate:(id)arg3 annotationsIndexed:(_Bool)arg4 spotlightType:(long long)arg5;

@end
