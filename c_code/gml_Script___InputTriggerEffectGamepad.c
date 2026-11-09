// gml_Script___InputTriggerEffectGamepad @ 0x1400da820

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script___InputTriggerEffectGamepad(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 **ppuVar4;
  undefined4 uVar5;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = 
  "gml_Script__triggerModeMap@anon@178@__InputTriggerEffectGamepad@__InputTriggerEffectGamepad";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_28 = 8;
  _eh_vector_constructor_iterator_(&local_98,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_ac = 0xffffff;
  local_b8 = 0;
  local_cc = 0;
  local_d8 = 0;
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_28 = 10;
  puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_d8,0,DAT_1419ff3e8,0);
  if (puVar2 != &local_b8) {
    local_c8 = *(undefined4 *)puVar2;
    uStack_c4 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_c0 = *(undefined4 *)(puVar2 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_c8);
  }
  local_28 = 0xc;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  local_c8 = _DAT_1419e1b80;
  uStack_c4 = uRam00000001419e1b84;
  uStack_c0 = uRam00000001419e1b88;
  uStack_bc = uRam00000001419e1b8c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_c8);
  local_58 = &local_98;
  ppuVar4 = &local_58;
  uVar3 = gml_Script_InputIconDefineEmpty(param_1,param_2,&local_d8,1,ppuVar4);
  uVar5 = (undefined4)((ulonglong)ppuVar4 >> 0x20);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    local_28 = 0xe;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 5;
    local_50 = &local_b8;
    local_c8 = _DAT_1419e1b80;
    uStack_c4 = uRam00000001419e1b84;
    uStack_c0 = uRam00000001419e1b88;
    uStack_bc = uRam00000001419e1b8c;
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_c8);
    local_48 = local_78;
    local_c8 = _DAT_141dc6120;
    uStack_c4 = uRam0000000141dc6124;
    uStack_c0 = uRam0000000141dc6128;
    uStack_bc = uRam0000000141dc612c;
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_68);
    }
    FUN_140041b80(local_68,&local_c8);
    local_40 = local_68;
    uVar3 = CONCAT44(uVar5,DAT_1419ff3d8);
    FUN_140e634e0(param_1,param_2,&local_a8,3,uVar3,&local_50);
    uVar5 = (undefined4)((ulonglong)uVar3 >> 0x20);
    local_28 = 0xf;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    local_58 = &local_b8;
    local_c8 = _DAT_1419e1b50;
    uStack_c4 = uRam00000001419e1b54;
    uStack_c0 = uRam00000001419e1b58;
    uStack_bc = uRam00000001419e1b5c;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_c8);
    local_50 = &local_88;
    local_c8 = _DAT_1419e1b90;
    uStack_c4 = uRam00000001419e1b94;
    uStack_c0 = uRam00000001419e1b98;
    uStack_bc = uRam00000001419e1b9c;
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_c8);
    local_48 = local_78;
    uVar3 = CONCAT44(uVar5,DAT_1419ff3d8);
    FUN_140e634e0(param_1,param_2,&local_d8,3,uVar3,&local_58);
    uVar5 = (undefined4)((ulonglong)uVar3 >> 0x20);
    local_28 = 0x10;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    local_58 = &local_b8;
    local_c8 = _DAT_1419e1b70;
    uStack_c4 = uRam00000001419e1b74;
    uStack_c0 = uRam00000001419e1b78;
    uStack_bc = uRam00000001419e1b7c;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_c8);
    local_50 = &local_88;
    local_c8 = _DAT_1419e1b60;
    uStack_c4 = uRam00000001419e1b64;
    uStack_c0 = uRam00000001419e1b68;
    uStack_bc = uRam00000001419e1b6c;
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_c8);
    local_48 = local_78;
    uVar3 = CONCAT44(uVar5,DAT_1419ff3d8);
    FUN_140e634e0(param_1,param_2,&local_d8,3,uVar3,&local_58);
    uVar5 = (undefined4)((ulonglong)uVar3 >> 0x20);
    local_28 = 0x11;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    local_58 = &local_b8;
    local_c8 = _DAT_1419e1b30;
    uStack_c4 = uRam00000001419e1b34;
    uStack_c0 = uRam00000001419e1b38;
    uStack_bc = uRam00000001419e1b3c;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_c8);
    local_50 = &local_88;
    local_c8 = _DAT_1419e1b40;
    uStack_c4 = uRam00000001419e1b44;
    uStack_c0 = uRam00000001419e1b48;
    uStack_bc = uRam00000001419e1b4c;
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_c8);
    local_48 = local_78;
    FUN_140e634e0(param_1,param_2,&local_d8,3,CONCAT44(uVar5,DAT_1419ff3d8),&local_58);
  }
  local_28 = 0x14;
  if (&local_b8 != param_3) {
    local_c8 = (undefined4)local_b8;
    uStack_c4 = local_b8._4_4_;
    uStack_c0 = uStack_b0;
    uStack_bc = uStack_ac;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_c8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(&local_98,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

