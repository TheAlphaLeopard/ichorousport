// gml_Script____struct___9__funcSplit_anon_1903___InputCompareVersions___InputCompareVersions @ 0x14006c5d0

/* WARNING: Removing unreachable block (ram,0x00014006c954) */

undefined8 *
gml_Script____struct___9__funcSplit_anon_1903___InputCompareVersions___InputCompareVersions
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  int local_a8;
  undefined8 local_a0;
  byte local_94;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_54;
  undefined8 *local_50 [3];
  
  local_70 = 
  "gml_Script__funcSafeReal@anon@2040@_funcSplit@anon@1903@__InputCompareVersions@__InputCompareVersions"
  ;
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0x3c;
  uVar5 = 1;
  _eh_vector_constructor_iterator_(&local_a0,0x10,1,FUN_1400424d0,FUN_140041b30);
  uStack_bc = 0xffffff;
  local_c8 = 0;
  local_54 = 0xffffff;
  local_60 = 0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 0x3e;
  local_ac = DAT_141dc7be4;
  local_b0 = DAT_141dc7be0;
  if ((1 << ((byte)DAT_141dc7be4 & 0x1f) & 0x46U) == 0) {
    local_b8 = DAT_141dc7bd8;
  }
  else {
    FUN_1400419b0(&local_b8,&DAT_141dc7bd8);
  }
  puVar4 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*param_5;
  }
  iVar1 = FUN_140e851f0(puVar3,&local_b8,DAT_141955260,0);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if (iVar1 == 0) {
    local_68 = 0x3e;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    *(undefined4 *)((longlong)param_3 + 0xc) = 0;
    *param_3 = 0;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
  }
  else {
    local_68 = 0x40;
    lVar2 = FUN_140e4cb40(DAT_141a618e8 * 8);
    iVar1 = DAT_141a618e8;
    local_b8 = lVar2;
    FUN_141290260(lVar2,DAT_141a618e0,(longlong)DAT_141a618e8 << 3);
    local_a8 = iVar1;
    local_68 = 0x42;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    if ((param_4 < 1) || (puVar4 = (undefined8 *)*param_5, puVar4 != &local_a0)) {
      local_88 = *(undefined4 *)puVar4;
      uStack_84 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_80 = *(undefined4 *)(puVar4 + 1);
      uStack_7c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_94 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a0);
      }
      FUN_140041b80(&local_a0,&local_88);
    }
    local_50[0] = &local_a0;
    puVar4 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_d8,1,CONCAT44(uVar5,DAT_1419fee48),local_50);
    if (puVar4 != &local_c8) {
      local_88 = *(undefined4 *)puVar4;
      uStack_84 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_80 = *(undefined4 *)(puVar4 + 1);
      uStack_7c = *(undefined4 *)((longlong)puVar4 + 0xc);
      FUN_140041b80(&local_c8,&local_88);
    }
    if (lVar2 != 0) {
      FUN_140e4cd60(lVar2);
    }
    local_68 = 0x49;
    if (&local_c8 != param_3) {
      local_88 = (undefined4)local_c8;
      uStack_84 = local_c8._4_4_;
      uStack_80 = uStack_c0;
      uStack_7c = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_88);
    }
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
  }
  _eh_vector_destructor_iterator_(&local_a0,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

