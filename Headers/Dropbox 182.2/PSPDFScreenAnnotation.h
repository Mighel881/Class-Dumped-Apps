//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKit/PSPDFAssetAnnotation.h>

@interface PSPDFScreenAnnotation : PSPDFAssetAnnotation
{
    unsigned long long _mediaScreenWindowType;
}

+ (id)propertyKeys;
+ (id)supportedTypes;
@property unsigned long long mediaScreenWindowType; // @synthesize mediaScreenWindowType=_mediaScreenWindowType;
- (void)implementation_refreshFromCoreAnnotation:(id)arg1 additionalWork:(CDUnknownBlockType)arg2;
- (id)initWithCoreAnnotation:(id)arg1;
- (id)init;

@end
