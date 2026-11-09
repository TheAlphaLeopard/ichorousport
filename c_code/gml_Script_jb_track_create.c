// gml_Script_jb_track_create @ 0x14039c250

undefined8 *
gml_Script_jb_track_create
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 *local_88;
  undefined8 *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined1 local_50 [12];
  byte local_44;
  undefined8 local_40;
  byte local_34;
  
  local_60 = "gml_Script_anon@8075@___struct___129@JUKEBOX_system";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0x11c;
  uVar7 = 1;
  _eh_vector_constructor_iterator_(local_50,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde9a8) {
    _Init_thread_header(&DAT_141dde9a8);
    if (DAT_141dde9a8 == -1) {
      DAT_141dde9d0 = FUN_140e63aa0(DAT_1419f4e28);
      _Init_thread_footer(&DAT_141dde9a8);
    }
  }
  FUN_140e643a0(param_1,DAT_141dde9d0);
  local_58 = 0x11d;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f4b28);
  FUN_140e609c0(param_1);
  puVar2 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_a8,0,CONCAT44(uVar7,DAT_1419fd6d8),0);
  if (puVar2 != puVar1) {
    local_98 = *puVar2;
    uStack_94 = puVar2[1];
    uStack_90 = puVar2[2];
    uStack_8c = puVar2[3];
    if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_98);
  }
  FUN_140e60910(1);
  local_58 = 0x11e;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f4d78);
  FUN_140e609c0(param_1);
  puVar6 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*param_5;
  }
  if (puVar4 != puVar3) {
    local_98 = *(undefined4 *)puVar4;
    uStack_94 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_90 = *(undefined4 *)(puVar4 + 1);
    uStack_8c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_98);
  }
  FUN_140e60910(1);
  local_58 = 0x122;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f4aa8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_98,gml_Script_anon_8589_anon_8075____struct___129_JUKEBOX_system,param_1);
  if (&local_98 != puVar1) {
    local_78 = local_98;
    uStack_74 = uStack_94;
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_78);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140e60910(1);
  local_58 = 0x128;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f4aa8);
  local_78 = (undefined4)DAT_141dd2368;
  uStack_74 = DAT_141dd2368._4_4_;
  uStack_70 = DAT_141dd2370;
  uStack_6c = DAT_141dd2374;
  if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_50);
  }
  FUN_140041b80(local_50,&local_78);
  local_88 = local_50;
  if ((param_4 < 2) || (puVar6 = (undefined8 *)param_5[1], puVar6 != &local_40)) {
    local_78 = *(undefined4 *)puVar6;
    uStack_74 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_70 = *(undefined4 *)(puVar6 + 1);
    uStack_6c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_40);
    }
    FUN_140041b80(&local_40,&local_78);
  }
  local_80 = &local_40;
  FUN_140e63610(param_1,param_2,&local_a8,2,uVar5,&local_88);
  local_58 = 0x12a;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0aa28);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_98,gml_Script_anon_8646_anon_8075____struct___129_JUKEBOX_system,param_1);
  if (&local_98 != puVar1) {
    local_78 = local_98;
    uStack_74 = uStack_94;
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_78);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140e60910(1);
  local_58 = 299;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f4d88);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_98,gml_Script_anon_8714_anon_8075____struct___129_JUKEBOX_system,param_1);
  if (&local_98 != puVar1) {
    local_78 = local_98;
    uStack_74 = uStack_94;
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_78);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140e60910(1);
  local_58 = 300;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f4ab8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_98,gml_Script_anon_8075____struct___129_JUKEBOX_system,param_1);
  if (&local_98 != puVar1) {
    local_78 = local_98;
    uStack_74 = uStack_94;
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_78);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140e60910(1);
  local_58 = 0x12d;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f49b8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_98,gml_Script____struct___129,param_1);
  if (&local_98 != puVar1) {
    local_78 = local_98;
    uStack_74 = uStack_94;
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_78);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(local_50,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

