// gml_GlobalScript___InputRegisterGamepadDisconnected @ 0x1400c92f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_GlobalScript___InputRegisterGamepadDisconnected
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint *puVar4;
  uint **ppuVar5;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  uint local_b8 [3];
  uint uStack_ac;
  undefined8 local_a8;
  uint uStack_a0;
  uint uStack_9c;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint local_88 [3];
  byte local_7c;
  uint local_78 [3];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  uint *local_40;
  uint *local_38;
  undefined1 *local_30;
  
  local_50 = "gml_Script_anon@160@__InputRegisterGamepadConnected@__InputRegisterGamepadConnected";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 5;
  _eh_vector_constructor_iterator_(local_88,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_ac = 0xffffff;
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc7d0) &&
     (_Init_thread_header(&DAT_141ddc7d0), DAT_141ddc7d0 == -1)) {
    DAT_141ddc7d8 = (longlong *)FUN_140e63aa0(DAT_141a02a88);
    _Init_thread_footer(&DAT_141ddc7d0);
  }
  if (DAT_141ddc053 == '\0') {
    FUN_140e64380(DAT_141ddc7d8,
                  "gml_Script_anon@160@__InputRegisterGamepadConnected@__InputRegisterGamepadConnected"
                 );
    FUN_140e64380(param_1,
                  "gml_Script_anon@160@__InputRegisterGamepadConnected@__InputRegisterGamepadConnected"
                 );
  }
  local_48 = 7;
  if (DAT_141ddc053 == '\0') {
    DAT_141ddc053 = '\x01';
    puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a011a8);
    puVar3 = (undefined8 *)(**(code **)(*DAT_141ddc7d8 + 0x10))(DAT_141ddc7d8,DAT_141a01188);
    FUN_140e609c0(DAT_141ddc7d8);
    if (puVar2 != puVar3) {
      local_a8 = *puVar2;
      uStack_a0 = *(uint *)(puVar2 + 1);
      uStack_9c = *(undefined4 *)((longlong)puVar2 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_a8);
    }
    FUN_140e60910(1);
  }
  local_48 = 9;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_a8 = CONCAT44(uRam0000000141dcb05c,_DAT_141dcb058);
  uStack_a0 = uRam0000000141dcb060;
  uStack_9c = DAT_141dcb064;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_a8);
  local_40 = local_88;
  puVar2 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar4 = (uint *)&DAT_1419df7b0;
LAB_1400c951f:
    local_a8 = *(ulonglong *)puVar4;
    uStack_a0 = puVar4[2];
    uStack_9c = puVar4[3];
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_a8);
  }
  else {
    puVar4 = (uint *)*param_5;
    if (puVar4 != local_78) goto LAB_1400c951f;
  }
  local_38 = local_78;
  local_a8 = CONCAT44(uRam0000000141dcb04c,_DAT_141dcb048);
  uStack_a0 = uRam0000000141dcb050;
  uStack_9c = DAT_141dcb054;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_a8);
  local_30 = local_68;
  ppuVar5 = &local_40;
  gml_Script___ApplyPS5_anon_427___InputTrggerEffectClassFeedback___InputTrggerEffectClassFeedback
            (param_1,param_2,&local_c8,3,ppuVar5);
  uVar1 = (undefined4)((ulonglong)ppuVar5 >> 0x20);
  local_48 = 0xb;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_98 = DAT_1419fd278 & 0xffffff;
  uStack_94 = (int)(DAT_1419fd278 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_94 == 0xf) {
    uStack_94 = 0x4000004;
  }
  else {
    uStack_94 = uStack_94 | 0x1000000;
  }
  uStack_9c = 0xf;
  local_a8 = CONCAT44(uStack_94,DAT_1419fd278) & 0xffffffff00ffffff;
  uStack_90 = uStack_a0;
  uStack_8c = 0xf;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_98);
  local_40 = local_88;
  if (param_4 < 1) {
    puVar4 = (uint *)&DAT_1419df7b0;
  }
  else {
    puVar4 = (uint *)*param_5;
    if (puVar4 == local_78) goto LAB_1400c9687;
  }
  local_98 = *puVar4;
  uStack_94 = puVar4[1];
  uStack_90 = puVar4[2];
  uStack_8c = puVar4[3];
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_98);
LAB_1400c9687:
  local_38 = local_78;
  puVar4 = (uint *)FUN_140e634e0(param_1,param_2,&local_c8,2,CONCAT44(uVar1,DAT_1419fd6d8),&local_40
                                );
  if (puVar4 != local_b8) {
    local_98 = *puVar4;
    uStack_94 = puVar4[1];
    uStack_90 = puVar4[2];
    uStack_8c = puVar4[3];
    if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_98);
  }
  local_48 = 0xc;
  puVar3 = (undefined8 *)(**(code **)(*DAT_141ddc7d8 + 0x10))(DAT_141ddc7d8,DAT_141a01188);
  FUN_140e609c0(DAT_141ddc7d8);
  if (0 < param_4) {
    puVar2 = (undefined8 *)*param_5;
  }
  uVar1 = FUN_140e4a740(puVar2);
  puVar4 = (uint *)FUN_140e48e40(puVar3,uVar1);
  FUN_140e609c0(*(undefined8 *)*puVar3);
  if (local_b8 != puVar4) {
    local_98 = local_b8[0];
    uStack_94 = local_b8[1];
    uStack_90 = local_b8[2];
    uStack_8c = uStack_ac;
    if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_98);
  }
  FUN_140e60910(2);
  local_48 = 0xe;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_40 = local_b8;
  FUN_14008e6a0(param_1,param_2,&local_c8,1,&local_40);
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  _eh_vector_destructor_iterator_(local_88,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

