//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DBStormcrowNoauthVariant : NSObject
{
    NSString *_featureName;
    NSString *_variantName;
}

+ (id)stormcrowNoauthVariantWithFeatureName:(id)arg1 variantName:(id)arg2;
@property(readonly, nonatomic) NSString *variantName; // @synthesize variantName=_variantName;
@property(readonly, nonatomic) NSString *featureName; // @synthesize featureName=_featureName;
- (void).cxx_destruct;
- (id)description;
- (id)initWithFeatureName:(id)arg1 variantName:(id)arg2;

@end

