// gml_Script_arm_meeting_mask @ 0x140224e80

undefined8 *
gml_Script_arm_meeting_mask
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double local_108;
  uint local_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  double *local_88;
  undefined8 *local_80;
  undefined1 local_78 [80];
  
  local_d0 = "gml_Script_arm_meeting_line";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 3;
  _eh_vector_constructor_iterator_(local_78,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_fc = 0xffffff;
  local_108 = 0.0;
  uStack_ec = 0xffffff;
  local_f8 = 0;
  local_dc = 0;
  uVar6 = 0;
  uVar7 = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_c8 = 5;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
    if (param_5 == &local_c0) goto LAB_140224f8b;
  }
  local_b0 = *param_5;
  uStack_a8 = *(undefined4 *)(param_5 + 1);
  uStack_a4 = *(undefined4 *)((longlong)param_5 + 0xc);
  FUN_140041b80(&local_c0,&local_b0);
LAB_140224f8b:
  local_c8 = 6;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_fc = 0;
  local_108 = 0.0;
  bVar1 = true;
  do {
    if (!bVar1) {
      local_c8 = 6;
      uVar2 = local_fc & 0xffffff;
      if (uVar2 == 0) {
LAB_140225021:
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
          goto LAB_140225021;
        }
        FUN_140042910(&DAT_14172c3d8,&local_108,&local_108);
      }
    }
    bVar1 = false;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0f148);
    iVar3 = FUN_140e851f0(&local_108,uVar4,DAT_141955260,1);
    if ((iVar3 == -2) || (-1 < iVar3)) {
      local_c8 = 0xc;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      *(undefined4 *)((longlong)param_3 + 0xc) = 0;
      *param_3 = 0xc010000000000000;
      goto LAB_1402251ff;
    }
    local_c8 = 8;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    local_88 = &local_108;
    local_80 = &local_c0;
    puVar5 = (undefined8 *)gml_Script_seg_meeting_mask(param_1,param_2,&local_e8,2,&local_88);
    if (puVar5 != &local_f8) {
      local_98 = *(undefined4 *)puVar5;
      uStack_94 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_90 = *(undefined4 *)(puVar5 + 1);
      uStack_8c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_98);
    }
    local_c8 = 9;
    uStack_a4 = 0;
    local_b0 = 0xc010000000000000;
    iVar3 = FUN_140e851f0(&local_f8,&local_b0,DAT_141955260,0);
    if ((1 << ((byte)uStack_a4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b0);
    }
    if (iVar3 != 0) {
      local_c8 = 9;
      if (&local_f8 != param_3) {
        local_98 = (undefined4)local_f8;
        uStack_94 = local_f8._4_4_;
        uStack_90 = uStack_f0;
        uStack_8c = uStack_ec;
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        FUN_140041b80(param_3,&local_98);
      }
LAB_1402251ff:
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c0);
      }
      _eh_vector_destructor_iterator_(local_78,0x10,2,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_d8;
      return param_3;
    }
    uVar6 = SUB84(local_108,0);
    uVar7 = (undefined4)((ulonglong)local_108 >> 0x20);
  } while( true );
}

