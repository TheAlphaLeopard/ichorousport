// gml_Script_anon_2303_SnowState_SnowState @ 0x1404f2b20

undefined8 *
gml_Script_anon_2303_SnowState_SnowState
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar7;
  undefined8 uVar6;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 *local_a8;
  undefined8 *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined4 local_60 [3];
  byte local_54;
  undefined8 local_50;
  byte local_44;
  
  local_70 = "gml_Script____struct___234@SnowState@SnowState";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0x2c;
  uVar7 = 1;
  _eh_vector_constructor_iterator_(local_60,0x10,2,FUN_1400424d0,FUN_140041b30);
  puVar1 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419fccd8);
  puVar2 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419fcb98);
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddf1fc) &&
     (_Init_thread_header(&DAT_141ddf1fc), DAT_141ddf1fc == -1)) {
    DAT_141ddf208 = FUN_140e63aa0(DAT_1419fcc98);
    _Init_thread_footer(&DAT_141ddf1fc);
  }
  FUN_140e643a0(param_1,DAT_141ddf208);
  local_68 = 0x2d;
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fcb58);
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_98,gml_Script____struct___236____struct___234_SnowState_SnowState,0);
  if (&local_98 != puVar1) {
    local_88 = local_98;
    uStack_84 = uStack_94;
    uStack_80 = uStack_90;
    uStack_7c = uStack_8c;
    if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_88);
  }
  FUN_140e60910(1);
  if (puVar1 != local_60) {
    local_88 = *puVar1;
    uStack_84 = puVar1[1];
    uStack_80 = puVar1[2];
    uStack_7c = puVar1[3];
    if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_60);
    }
    FUN_140041b80(local_60,&local_88);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_a8 = local_60;
  puVar5 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*param_5;
    if (puVar4 == &local_50) goto LAB_1404f2d5d;
  }
  local_88 = *(undefined4 *)puVar4;
  uStack_84 = *(undefined4 *)((longlong)puVar4 + 4);
  uStack_80 = *(undefined4 *)(puVar4 + 1);
  uStack_7c = *(undefined4 *)((longlong)puVar4 + 0xc);
  if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_50);
  }
  FUN_140041b80(&local_50,&local_88);
LAB_1404f2d5d:
  local_a0 = &local_50;
  FUN_140e609c0(param_1);
  uVar6 = CONCAT44(uVar7,DAT_1419fd6d8);
  puVar1 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_b8,2,uVar6,&local_a8);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (puVar1 != puVar3) {
    local_88 = *puVar1;
    uStack_84 = puVar1[1];
    uStack_80 = puVar1[2];
    uStack_7c = puVar1[3];
    if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_88);
  }
  FUN_140e60910(1);
  local_68 = 0x31;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fcdf8);
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_98,gml_Script____struct___237_anon_2303_SnowState_SnowState,0);
  if (&local_98 != puVar2) {
    local_88 = local_98;
    uStack_84 = uStack_94;
    uStack_80 = uStack_90;
    uStack_7c = uStack_8c;
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_88);
  }
  FUN_140e60910(1);
  if (puVar2 != local_60) {
    local_88 = *puVar2;
    uStack_84 = puVar2[1];
    uStack_80 = puVar2[2];
    uStack_7c = puVar2[3];
    if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_60);
    }
    FUN_140041b80(local_60,&local_88);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_a8 = local_60;
  if ((param_4 < 2) || (puVar5 = (undefined8 *)param_5[1], puVar5 != &local_50)) {
    local_88 = *(undefined4 *)puVar5;
    uStack_84 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_80 = *(undefined4 *)(puVar5 + 1);
    uStack_7c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_50);
    }
    FUN_140041b80(&local_50,&local_88);
  }
  local_a0 = &local_50;
  FUN_140e609c0(param_1);
  puVar2 = (undefined4 *)
           FUN_140e634e0(param_1,param_2,&local_b8,2,CONCAT44(uVar7,DAT_1419fd6d8),&local_a8);
  if (puVar2 != puVar1) {
    local_88 = *puVar2;
    uStack_84 = puVar2[1];
    uStack_80 = puVar2[2];
    uStack_7c = puVar2[3];
    if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_88);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(local_60,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

