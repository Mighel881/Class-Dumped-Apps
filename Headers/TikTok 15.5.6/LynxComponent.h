//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface LynxComponent : NSObject
{
    id _parent;
    NSMutableArray *_children;
}

@property(readonly, nonatomic) NSMutableArray *children; // @synthesize children=_children;
@property(readonly, nonatomic) __weak id parent; // @synthesize parent=_parent;
- (void).cxx_destruct;
- (void)propsDidUpdate;
- (void)didMoveToSuperComponet;
- (void)willMoveToSuperComponent:(id)arg1;
- (void)willRemoveComponent:(id)arg1;
- (void)didAddSubComponent:(id)arg1;
- (void)removeChild:(id)arg1 atIndex:(long long)arg2;
- (void)insertChild:(id)arg1 atIndex:(long long)arg2;
- (id)init;

@end
