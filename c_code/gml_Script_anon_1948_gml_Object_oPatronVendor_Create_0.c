// gml_Script_anon_1948_gml_Object_oPatronVendor_Create_0 @ 0x140bcb180

undefined8 *
gml_Script_anon_1948_gml_Object_oPatronVendor_Create_0
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 *local_res18;
  undefined4 local_res20;
  undefined4 uVar11;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  byte local_7c;
  uint local_78 [2];
  undefined8 *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_res20 = 0;
  local_50 = "gml_Script_anon@1608@gml_Object_oPatronVendor_Create_0";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0x66;
  FUN_140041df0(local_78,param_4,1,param_5);
  uVar11 = 1;
  _eh_vector_constructor_iterator_(&local_88,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x66;
  puVar10 = &DAT_1419df7b0;
  uVar9 = (ulonglong)local_78[0];
  if ((int)local_78[0] < 1) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)*local_70;
  }
  iVar4 = FUN_140e851f0(puVar8,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 == 0) {
    local_48 = 0x66;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_b8 = 0;
    local_b0 = 0;
    local_ac = 5;
    if ((int)local_78[0] < 1) {
      puVar8 = &DAT_1419df7b0;
    }
    else {
      puVar8 = (undefined8 *)*local_70;
    }
    uVar11 = 0;
    puVar5 = (undefined8 *)FUN_14028f0c0(param_1,param_2,&local_b8,0,0);
    if (puVar5 != puVar8) {
      local_98 = *puVar5;
      uStack_90 = *(undefined4 *)(puVar5 + 1);
      uStack_8c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar8);
      }
      FUN_140041b80(puVar8,&local_98);
    }
  }
  local_48 = 0x67;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  if (((int)local_78[0] < 1) || (puVar10 = (undefined8 *)*local_70, puVar10 != &local_88)) {
    local_98 = *puVar10;
    uStack_90 = *(undefined4 *)(puVar10 + 1);
    uStack_8c = *(undefined4 *)((longlong)puVar10 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_98);
  }
  local_res18 = &local_88;
  uStack_8c = DAT_141dda384;
  uStack_90 = DAT_141dda380;
  if ((1 << ((byte)DAT_141dda384 & 0x1f) & 0x46U) == 0) {
    local_98 = DAT_141dda378;
  }
  else {
    FUN_1400419b0(&local_98,&DAT_141dda378);
  }
  uVar3 = uStack_8c;
  uVar2 = uStack_90;
  uVar1 = local_98;
  uVar6 = FUN_140e634e0(param_1,param_2,&local_b8,1,CONCAT44(uVar11,DAT_141a01298),&local_res18);
  uVar7 = 1 << ((byte)uVar3 & 0x1f) & 0x46;
  uStack_a0 = uVar2;
  uStack_9c = uVar3;
  if (uVar7 == 0) {
    local_a8 = uVar1;
  }
  else {
    FUN_1400419b0(&local_a8,&local_98);
  }
  local_res20 = 1;
  FUN_1400460e0(&local_a8,uVar6);
  if (&local_a8 != param_3) {
    local_68 = (undefined4)local_a8;
    uStack_64 = local_a8._4_4_;
    uStack_60 = uStack_a0;
    uStack_5c = uStack_9c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_68);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if (uVar7 != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(&local_88,0x10,1,FUN_140041b30);
  if (0 < (int)local_78[0]) {
    puVar10 = local_70;
    do {
      puVar8 = (undefined8 *)*puVar10;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar8);
      }
      *puVar8 = 0;
      *(undefined4 *)(puVar8 + 1) = 0;
      *(undefined4 *)((longlong)puVar8 + 0xc) = 5;
      puVar10 = puVar10 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  FUN_140e4cd60(local_70);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

