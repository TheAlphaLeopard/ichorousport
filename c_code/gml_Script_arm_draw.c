// gml_Script_arm_draw @ 0x1402203d0

undefined8 *
gml_Script_arm_draw(longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,
                   undefined8 *param_5)

{
  bool bVar1;
  uint uVar2;
  double *pdVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  double local_108;
  uint local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  double local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 local_b0 [16];
  undefined8 local_a0 [2];
  undefined8 local_90 [2];
  double *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  
  local_d0 = "gml_Script_arm_apply_force";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 4;
  _eh_vector_constructor_iterator_(local_b0,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_fc = 0xffffff;
  local_108 = 0.0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_c8 = 6;
  pdVar3 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0f148);
  if (pdVar3 != &local_108) {
    local_e8 = *pdVar3;
    uStack_e0 = *(undefined4 *)(pdVar3 + 1);
    uStack_dc = *(undefined4 *)((longlong)pdVar3 + 0xc);
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_e8);
  }
  bVar1 = true;
  uVar5 = 0;
  do {
    if (!bVar1) {
      local_c8 = 6;
      uVar2 = local_fc & 0xffffff;
      if (uVar2 == 0) {
LAB_140220542:
        local_108 = local_108 + -1.0;
      }
      else if (uVar2 == 1) {
        local_108 = (double)FUN_140e4b060(&local_108);
        local_108 = local_108 - 1.0;
        local_fc = 0;
      }
      else if (uVar2 == 7) {
        local_108 = (double)CONCAT44(local_108._4_4_,local_108._0_4_ + -1);
      }
      else if (uVar2 == 10) {
        local_108 = (double)((longlong)local_108 + -1);
      }
      else {
        if (uVar2 == 0xd) {
          local_fc = 0;
          goto LAB_140220542;
        }
        FUN_140042910(&DAT_14172c450,&local_108,&local_108);
      }
    }
    bVar1 = false;
    uStack_dc = 0;
    local_e8 = 0.0;
    uVar2 = FUN_140e851f0(&local_108,&local_e8,DAT_141955260,1);
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    if (0x7fffffff < uVar2) {
      if ((1 << ((byte)uVar5 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      _eh_vector_destructor_iterator_(local_b0,0x10,3,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_d8;
      return param_3;
    }
    local_c8 = 7;
    if ((1 << ((byte)uVar5 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    local_80 = &local_108;
    if (param_4 < 1) {
      puVar4 = &DAT_1419df7b0;
LAB_140220629:
      local_c0 = *(undefined4 *)puVar4;
      uStack_bc = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_b8 = *(undefined4 *)(puVar4 + 1);
      uStack_b4 = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)local_a0[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_a0);
      }
      FUN_140041b80(local_a0,&local_c0);
    }
    else {
      puVar4 = (undefined8 *)*param_5;
      if (puVar4 != local_a0) goto LAB_140220629;
    }
    local_78 = local_a0;
    if (param_4 < 2) {
      puVar4 = &DAT_1419df7b0;
LAB_140220679:
      local_c0 = *(undefined4 *)puVar4;
      uStack_bc = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_b8 = *(undefined4 *)(puVar4 + 1);
      uStack_b4 = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)local_90[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_90);
      }
      FUN_140041b80(local_90,&local_c0);
    }
    else {
      puVar4 = (undefined8 *)param_5[1];
      if (puVar4 != local_90) goto LAB_140220679;
    }
    local_70 = local_90;
    gml_Script_seg_calculate(param_1,param_2,&local_f8,3,&local_80);
    uVar5 = local_ec;
  } while( true );
}

