//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACCPhotoMovieEditMusicComponentProtocol-Protocol.h"
#import "AWEPhotoMusicEditorViewControllerDelegate-Protocol.h"

@class AWEPhotoMusicEditorViewController, NSString;
@protocol ACCComponentBusProtocol, ACCComponentProtocol, ACCComponentViewModelProvider, ACCEditPlayerComponentProtocol, ACCVideoEditViewComponentProtocol;

@interface ACCPhotoMovieEditMusicComponent : NSObject <AWEPhotoMusicEditorViewControllerDelegate, ACCPhotoMovieEditMusicComponentProtocol>
{
    id <ACCComponentBusProtocol> componentBus;
    AWEPhotoMusicEditorViewController *_musicEditor;
    id <ACCEditPlayerComponentProtocol> _playerComponent;
    id <ACCVideoEditViewComponentProtocol> _editViewComponent;
}

@property(readonly, nonatomic) __weak id <ACCVideoEditViewComponentProtocol> editViewComponent; // @synthesize editViewComponent=_editViewComponent;
@property(readonly, nonatomic) __weak id <ACCEditPlayerComponentProtocol> playerComponent; // @synthesize playerComponent=_playerComponent;
@property(retain, nonatomic) AWEPhotoMusicEditorViewController *musicEditor; // @synthesize musicEditor=_musicEditor;
@property(nonatomic) __weak id <ACCComponentBusProtocol> componentBus; // @synthesize componentBus;
- (void).cxx_destruct;
- (id)publishModel;
- (void)musicEditorDidChooseToShowMusicLibrary:(id)arg1;
- (void)musicEditor:(id)arg1 didPickMusic:(id)arg2 error:(id)arg3;
- (id)p_componentEditor;
- (void)requestMusicDetailIfNeeded:(id)arg1;
- (void)handleSelectMusic:(id)arg1 error:(id)arg2;
- (id)changeBGMData;
- (void)musicClicked:(id)arg1;
- (id)autoInjectComponentDictionaryOfeditViewComponent;
- (id)autoInjectComponentDictionaryOfplayerComponent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <ACCComponentProtocol> superComponent;
@property(readonly) Class superclass;
@property(nonatomic) __weak id <ACCComponentViewModelProvider> viewModelProvider;

@end
