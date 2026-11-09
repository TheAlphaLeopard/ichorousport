// gml_Script_anon_3173_gml_Object_oRogueLevelManager_Other_10 @ 0x140cdf9a0

undefined8 *
gml_Script_anon_3173_gml_Object_oRogueLevelManager_Other_10
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,longlong param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  code *pcVar8;
  undefined4 uVar9;
  double local_108;
  uint local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  double local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined1 local_78 [16];
  undefined8 local_68 [2];
  undefined8 *local_58;
  undefined8 *local_50;
  
  local_c0 = "gml_Script_anon@2936@gml_Object_oRogueLevelManager_Other_10";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 0x7c;
  pcVar8 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_78,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_dc = 0xffffff;
  local_e8 = 0;
  local_fc = 0xffffff;
  local_108 = 0.0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_7c = 0;
  uVar6 = 0;
  uVar7 = 0;
  local_88 = 0;
  local_ec = 0;
  local_f8 = 0;
  local_8c = 0;
  local_98 = (double)param_4;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_b8 = 0x7e;
  puVar4 = (undefined8 *)FUN_140e8da20(&local_88,param_1,0);
  if (puVar4 != &local_e8) {
    local_a8 = *puVar4;
    uStack_a0 = puVar4[1];
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_a8);
  }
  local_b8 = 0x7f;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_fc = 0;
  local_108 = 0.0;
  bVar1 = true;
  do {
    uVar9 = (undefined4)((ulonglong)pcVar8 >> 0x20);
    if (!bVar1) {
      local_b8 = 0x7f;
      uVar2 = local_fc & 0xffffff;
      if (uVar2 == 0) {
LAB_140cdfb62:
        local_108 = (double)CONCAT44(uVar7,uVar6) + 1.0;
      }
      else if (uVar2 == 1) {
        local_108 = (double)FUN_140e4b060(&local_108);
        local_108 = local_108 + 1.0;
        local_fc = 0;
      }
      else if (uVar2 == 7) {
        local_108 = (double)CONCAT44(local_108._4_4_,local_108._0_4_ + 1);
      }
      else if (uVar2 == 10) {
        local_108 = (double)((longlong)local_108 + 1);
      }
      else {
        if (uVar2 == 0xd) {
          local_fc = 0;
          goto LAB_140cdfb62;
        }
        FUN_140042910(&DAT_14172c3d8,&local_108,&local_108);
      }
    }
    bVar1 = false;
    iVar3 = FUN_140e851f0(&local_108,&local_98,DAT_141955260,1);
    if ((iVar3 == -2) || (-1 < iVar3)) {
      local_b8 = 0x81;
      uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f4f18);
      uStack_a0 = CONCAT44(uStack_dc,uStack_e0);
      local_a8 = local_e8;
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      FUN_140041b80(&local_d8,&local_a8);
      FUN_140e87930(uVar5,DAT_1419fa318,0x80000000,&local_d8);
      if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      _eh_vector_destructor_iterator_(local_78,0x10,2,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_c8;
      return param_3;
    }
    local_b8 = 0x80;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    local_58 = &local_e8;
    iVar3 = FUN_140e4a740(&local_108);
    if (iVar3 < param_4) {
      puVar4 = *(undefined8 **)(param_5 + (longlong)iVar3 * 8);
      if (puVar4 != local_68) goto LAB_140cdfc32;
    }
    else {
      puVar4 = &DAT_1419df7b0;
LAB_140cdfc32:
      local_a8 = *puVar4;
      uStack_a0 = puVar4[1];
      if ((1 << ((byte)local_68[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_68);
      }
      FUN_140041b80(local_68,&local_a8);
    }
    local_50 = local_68;
    pcVar8 = (code *)CONCAT44(uVar9,DAT_1419fe568);
    FUN_140e634e0(param_1,param_2,&local_f8,2,pcVar8,&local_58);
    uVar6 = SUB84(local_108,0);
    uVar7 = (undefined4)((ulonglong)local_108 >> 0x20);
  } while( true );
}

