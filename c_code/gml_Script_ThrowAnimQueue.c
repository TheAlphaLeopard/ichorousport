// gml_Script_ThrowAnimQueue @ 0x140215fa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_ThrowAnimQueue
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 uVar6;
  undefined8 uVar5;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined8 local_78;
  byte local_6c;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Script_anon@2740@ThrowAnimQueue@ALTWEAPONSINIT";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0x68;
  uVar6 = 1;
  _eh_vector_constructor_iterator_(&local_88,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0;
  local_b8 = 0;
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x69;
  puVar4 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*param_5;
    if (puVar2 == &local_78) goto LAB_1402160a1;
  }
  local_c8 = *puVar2;
  uStack_c0 = *(undefined4 *)(puVar2 + 1);
  uStack_bc = *(undefined4 *)((longlong)puVar2 + 0xc);
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140041b80(&local_78,&local_c8);
LAB_1402160a1:
  local_60 = &local_78;
  uVar3 = CONCAT44(uVar6,DAT_141a0a068);
  puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_b8,1,uVar3,&local_60);
  uVar6 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (puVar2 != &local_a8) {
    local_c8 = *puVar2;
    uStack_c0 = *(undefined4 *)(puVar2 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_c8);
  }
  local_48 = 0x6a;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  if ((param_4 < 1) || (puVar4 = (undefined8 *)*param_5, puVar4 != &local_88)) {
    local_c8 = *puVar4;
    uStack_c0 = *(undefined4 *)(puVar4 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_c8);
  }
  local_68 = &local_88;
  uVar5 = CONCAT44(uVar6,DAT_141a09fe8);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_b8,1,uVar5,&local_68);
  uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
  uStack_bc = 0;
  local_c8 = 0;
  iVar1 = FUN_140e851f0(uVar3,&local_c8,DAT_141955260,0);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if (iVar1 == 0) {
    local_48 = 0x6b;
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    local_98 = 0;
    local_90 = 0;
    local_8c = 5;
    local_c8 = CONCAT44(uRam0000000141dc62e4,_DAT_141dc62e0);
    uStack_c0 = uRam0000000141dc62e8;
    uStack_bc = uRam0000000141dc62ec;
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_c8);
    local_60 = &local_78;
    uVar3 = FUN_140e634e0(param_1,param_2,&local_98,1,CONCAT44(uVar6,DAT_141a0a0d8),&local_60);
    FUN_140046500(&local_a8,uVar3);
  }
  local_48 = 0x6c;
  if (&local_a8 != param_3) {
    local_c8 = local_a8;
    uStack_c0 = uStack_a0;
    uStack_bc = uStack_9c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_c8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(&local_88,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

