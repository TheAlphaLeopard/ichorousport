// gml_Script___scribble_gen_4_build_words @ 0x1401be1c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script___scribble_gen_4_build_words
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 *local_res18;
  code *pcVar8;
  undefined4 uVar9;
  double local_118;
  uint local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined4 local_98 [3];
  undefined4 local_8c;
  undefined4 local_88 [3];
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [64];
  
  local_e0 = "gml_Script___scribble_debug_krutidev";
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  local_d8 = 0x194;
  pcVar8 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_68,0x10,1,FUN_1400424d0,FUN_140041b30);
  uStack_bc = 0xffffff;
  local_c8 = 0;
  local_10c = 0xffffff;
  local_118 = 0.0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_fc = 0;
  local_108 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_d8 = 0x196;
  local_b8 = CONCAT44(uRam0000000141dcc33c,_DAT_141dcc338);
  uStack_b0 = uRam0000000141dcc340;
  uStack_ac = DAT_141dcc344;
  FUN_140041b80(&local_c8,&local_b8);
  local_d8 = 0x198;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0.0;
  local_d8 = 0x199;
  do {
    local_10c = 0;
LAB_1401be300:
    uVar9 = (undefined4)((ulonglong)pcVar8 >> 0x20);
    local_9c = 0xd;
    local_a8 = 0x3ff0000000000000;
    cVar1 = FUN_140e491e0(&local_a8);
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    if (cVar1 == '\0') {
LAB_1401be5eb:
      local_d8 = 0x1a5;
      if (&local_c8 != param_3) {
        local_78 = (undefined4)local_c8;
        uStack_74 = local_c8._4_4_;
        uStack_70 = uStack_c0;
        uStack_6c = uStack_bc;
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        FUN_140041b80(param_3,&local_78);
      }
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      _eh_vector_destructor_iterator_(local_68,0x10,1,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_e8;
      return param_3;
    }
    local_d8 = 0x19b;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    dVar7 = local_118;
    if ((local_10c & 0xffffff) != 0) {
      dVar7 = (double)FUN_140e4b060(&local_118);
    }
    if (param_4 < 1) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)*param_5;
    }
    uVar2 = FUN_140e4a740(puVar5);
    puVar5 = (undefined8 *)FUN_140ea8b20(&local_108,uVar2,(longlong)dVar7,0);
    if (puVar5 != &local_f8) {
      local_78 = *(undefined4 *)puVar5;
      uStack_74 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_70 = *(undefined4 *)(puVar5 + 1);
      uStack_6c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_78);
    }
    local_d8 = 0x19c;
    local_8c = 7;
    local_98[0] = 0xffff;
    uVar3 = FUN_140e851f0(&local_f8,local_98,DAT_141955260,1);
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    if (uVar3 < 0x80000000) {
      local_d8 = 0x19c;
      local_7c = 7;
      local_88[0] = 0xffff;
      FUN_1400462a0(&local_f8,local_88);
      if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_88);
      }
    }
    local_d8 = 0x19e;
    uStack_ac = 0;
    local_b8 = 0;
    iVar4 = FUN_140e851f0(&local_f8,&local_b8,DAT_141955260,1);
    if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    if (iVar4 != -2 && iVar4 < 1) goto LAB_1401be5eb;
    local_d8 = 0x1a0;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    local_res18 = &local_f8;
    pcVar8 = (code *)CONCAT44(uVar9,DAT_141a087b8);
    uVar6 = FUN_140e634e0(param_1,param_2,&local_108,1,pcVar8,&local_res18);
    FUN_1400460e0(&local_c8,uVar6);
    local_d8 = 0x1a2;
    uVar3 = local_10c & 0xffffff;
    if (uVar3 == 0) {
LAB_1401be5aa:
      local_118 = local_118 + 1.0;
      goto LAB_1401be300;
    }
    if (uVar3 != 1) {
      if (uVar3 == 7) {
        local_118 = (double)CONCAT44(local_118._4_4_,local_118._0_4_ + 1);
      }
      else if (uVar3 == 10) {
        local_118 = (double)((longlong)local_118 + 1);
      }
      else {
        if (uVar3 == 0xd) {
          local_10c = 0;
          goto LAB_1401be5aa;
        }
        FUN_140042910(&DAT_14172c3d8,&local_118,&local_118);
      }
      goto LAB_1401be300;
    }
    local_118 = (double)FUN_140e4b060(&local_118);
    local_118 = local_118 + 1.0;
  } while( true );
}

