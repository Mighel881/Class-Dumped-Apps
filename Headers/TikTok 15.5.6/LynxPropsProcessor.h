//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface LynxPropsProcessor : NSObject
{
}

+ (void)updateProp:(id)arg1 withKey:(id)arg2 forShadowNode:(id)arg3;
+ (void)updateProp:(id)arg1 withKey:(id)arg2 forUI:(id)arg3;
+ (CDUnknownBlockType)findPropSetterByComponent:(Class)arg1 andKey:(id)arg2;
+ (void)extractPropSetterFromComponent:(Class)arg1 withName:(id)arg2;
+ (struct NSMutableDictionary *)getSetterMapFromComponent:(Class)arg1;
+ (struct NSMutableDictionary *)getSetterMapFromComponent:(Class)arg1 withPropSetterLookUp:(struct objc_method *)arg2;
+ (CDUnknownBlockType)wrapValueConversionWithType:(id)arg1 forSetter:(CDUnknownBlockType)arg2;
+ (SEL)generateTypeSel:(id)arg1;

@end
