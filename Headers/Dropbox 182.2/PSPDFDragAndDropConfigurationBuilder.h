//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKit/PSPDFBaseConfigurationBuilder.h>

@interface PSPDFDragAndDropConfigurationBuilder : PSPDFBaseConfigurationBuilder
{
    _Bool _allowDraggingToExternalApps;
    unsigned long long _allowedDragTypes;
    unsigned long long _acceptedDropTypes;
    unsigned long long _allowedDropTargets;
}

+ (Class)configurationTargetClass;
@property(nonatomic) _Bool allowDraggingToExternalApps; // @synthesize allowDraggingToExternalApps=_allowDraggingToExternalApps;
@property(nonatomic) unsigned long long allowedDropTargets; // @synthesize allowedDropTargets=_allowedDropTargets;
@property(nonatomic) unsigned long long acceptedDropTypes; // @synthesize acceptedDropTypes=_acceptedDropTypes;
@property(nonatomic) unsigned long long allowedDragTypes; // @synthesize allowedDragTypes=_allowedDragTypes;
- (void)reset;

@end

