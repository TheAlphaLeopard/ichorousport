// gml_Script_anon_440_speaker_get_profile @ 0x140515440

undefined8 *
gml_Script_anon_440_speaker_get_profile
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80 [3];
  byte local_74;
  undefined8 local_70;
  byte local_64;
  uint local_60 [2];
  undefined8 *local_58;
  undefined4 *local_50;
  undefined8 *local_48;
  
  local_90 = "gml_Script_anon@115@speaker_get_profile";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 5;
  FUN_140041df0(local_60,param_4,2,param_5);
  uVar9 = 1;
  _eh_vector_constructor_iterator_(local_80,0x10,2,FUN_1400424d0,FUN_140041b30);
  puVar2 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419fd158);
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419fd1a8);
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddf428) &&
     (_Init_thread_header(&DAT_141ddf428), DAT_141ddf428 == -1)) {
    DAT_141ddf420 = FUN_140e63aa0(DAT_1419fd148);
    _Init_thread_footer(&DAT_141ddf428);
  }
  local_88 = 5;
  puVar7 = &DAT_1419df7b0;
  uVar8 = (ulonglong)local_60[0];
  if ((int)local_60[0] < 2) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_58[1];
  }
  iVar1 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_88 = 5;
    uStack_bc = 0xf;
    local_c8 = (longlong *)0x1000001000003e6;
    if ((int)local_60[0] < 2) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)local_58[1];
      if (&local_c8 == puVar4) goto LAB_140515605;
    }
    local_b8 = 0x3e6;
    uStack_b4 = 0x1000001;
    uStack_b0 = uStack_c0;
    uStack_ac = 0xf;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_b8);
  }
LAB_140515605:
  FUN_140e643a0(param_1,DAT_141ddf420);
  local_88 = 6;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a8a8);
  FUN_140e609c0(param_1);
  if ((int)local_60[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_58;
  }
  if (puVar5 != puVar4) {
    local_b8 = *(undefined4 *)puVar5;
    uStack_b4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_b0 = *(undefined4 *)(puVar5 + 1);
    uStack_ac = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_b8);
  }
  FUN_140e60910(1);
  local_88 = 7;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  puVar6 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd138);
  if (puVar2 != local_80) {
    local_b8 = *puVar2;
    uStack_b4 = puVar2[1];
    uStack_b0 = puVar2[2];
    uStack_ac = puVar2[3];
    if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_80);
    }
    FUN_140041b80(local_80,&local_b8);
  }
  local_50 = local_80;
  if ((int)local_60[0] < 2) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_58[1];
    if (puVar4 == &local_70) goto LAB_140515748;
  }
  local_b8 = *(undefined4 *)puVar4;
  uStack_b4 = *(undefined4 *)((longlong)puVar4 + 4);
  uStack_b0 = *(undefined4 *)(puVar4 + 1);
  uStack_ac = *(undefined4 *)((longlong)puVar4 + 0xc);
  if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  FUN_140041b80(&local_70,&local_b8);
LAB_140515748:
  local_48 = &local_70;
  FUN_140e609c0(param_1);
  puVar2 = (undefined4 *)
           FUN_140e634e0(param_1,param_2,&local_a8,2,CONCAT44(uVar9,DAT_141a01138),&local_50);
  if (puVar2 != puVar6) {
    local_b8 = *puVar2;
    uStack_b4 = puVar2[1];
    uStack_b0 = puVar2[2];
    uStack_ac = puVar2[3];
    if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_b8);
  }
  FUN_140e60910(1);
  local_88 = 9;
  uStack_bc = 6;
  if (0 < (int)local_60[0]) {
    puVar7 = (undefined8 *)*local_58;
  }
  local_c8 = param_1;
  FUN_140e98ef0(param_1,param_2,uVar3,puVar7,&local_c8);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_88 = 0xb;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0aa28);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_c8,gml_Script_anon_679_anon_440_speaker_get_profile_speaker_get_profile,
                param_1);
  if (&local_c8 != puVar7) {
    local_b8 = (undefined4)local_c8;
    uStack_b4 = local_c8._4_4_;
    uStack_b0 = uStack_c0;
    uStack_ac = uStack_bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_b8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(local_80,0x10,2,FUN_140041b30);
  if (0 < (int)local_60[0]) {
    puVar7 = local_58;
    do {
      puVar4 = (undefined8 *)*puVar7;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 5;
      puVar7 = puVar7 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  FUN_140e4cd60(local_58);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}

