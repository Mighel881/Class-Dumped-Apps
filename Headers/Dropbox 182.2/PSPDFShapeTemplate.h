//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKit/PSPDFModel.h>

@class NSArray, NSString;

@interface PSPDFShapeTemplate : PSPDFModel
{
    struct unique_ptr<PDFC::ShapeTemplate, std::__1::default_delete<PDFC::ShapeTemplate>> _coreTemplate;
    NSString *_identifier;
}

+ (id)propertyKeys;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *normalizedPoints;
- (struct ShapeTemplate)coreTemplate;
- (id)initWithIdentifier:(id)arg1 normalizedPoints:(const vector_5265f573 *)arg2;
- (id)initWithIdentifier:(id)arg1 points:(id)arg2;

@end

