//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKit/PSPDFModel.h>

#import <PSPDFKit/NSFastEnumeration-Protocol.h>
#import <PSPDFKit/NSSecureCoding-Protocol.h>

@class NSArray;

@interface PSPDFAnnotationSet : PSPDFModel <NSFastEnumeration, NSSecureCoding>
{
    NSArray *_annotations;
}

+ (id)allowedSecureCodingClassesByPropertyKey;
+ (id)propertyKeys;
+ (_Bool)supportsSecureCoding;
+ (id)unarchiveFromClipboard;
@property(copy, nonatomic) NSArray *annotations; // @synthesize annotations=_annotations;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)copyToClipboard;
- (void)drawInContext:(struct CGContext *)arg1 options:(id)arg2;
@property(nonatomic) struct CGRect boundingBox;
- (id)description;
- (id)initWithAnnotations:(id)arg1;

@end
