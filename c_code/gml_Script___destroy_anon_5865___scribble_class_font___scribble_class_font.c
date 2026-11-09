// gml_Script___destroy_anon_5865___scribble_class_font___scribble_class_font @ 0x1401458c0

undefined8 *
gml_Script___destroy_anon_5865___scribble_class_font___scribble_class_font
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  double *pdVar5;
  uint uVar6;
  ulonglong uVar7;
  double dVar8;
  undefined8 *local_res8;
  ulonglong uVar9;
  undefined8 **ppuVar10;
  double local_f8;
  uint local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  double local_d8;
  uint local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_84;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [48];
  
  local_b0 = 
  "gml_Script___ensure_material_textures_fetched@anon@3155@__scribble_class_font@__scribble_class_font"
  ;
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 0x5b;
  uVar1 = 1;
  _eh_vector_constructor_iterator_(local_58,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0.0;
  local_ec = 0xffffff;
  local_f8 = 0.0;
  local_84 = 0xffffff;
  local_90 = 0;
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_a8 = 0x5f;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a06328);
  if (puVar4 != &local_c8) {
    local_78 = *(undefined4 *)puVar4;
    uStack_74 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_70 = *(undefined4 *)(puVar4 + 1);
    uStack_6c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_78);
  }
  local_a8 = 0x60;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  local_res8 = &local_c8;
  ppuVar10 = &local_res8;
  uVar9 = CONCAT44(uVar1,DAT_141a064d8);
  pdVar5 = (double *)FUN_140e634e0(param_1,param_2,&local_e8,1,uVar9,ppuVar10);
  if (pdVar5 != &local_d8) {
    local_78 = *(undefined4 *)pdVar5;
    uStack_74 = *(undefined4 *)((longlong)pdVar5 + 4);
    uStack_70 = *(undefined4 *)(pdVar5 + 1);
    uStack_6c = *(undefined4 *)((longlong)pdVar5 + 0xc);
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_78);
  }
  local_a8 = 100;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_ec = 0;
  local_f8 = 0.0;
  local_a8 = 0x65;
  dVar8 = local_d8;
  if ((local_cc & 0xffffff) != 0) {
    dVar8 = (double)FUN_140e4b060(&local_d8);
  }
  uVar7 = (ulonglong)dVar8;
  uVar6 = (uint)uVar7;
  do {
    while( true ) {
      if ((int)uVar6 < 1) {
        if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_e8);
        }
        if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_a0);
        }
        if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_68);
        }
        if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_90);
        }
        if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d8);
        }
        if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c8);
        }
        _eh_vector_destructor_iterator_(local_58,0x10,1,FUN_140041b30);
        DAT_141dc7a50 = (undefined8 *)local_b8;
        return param_3;
      }
      uVar6 = (int)uVar7 - 1;
      uVar7 = (ulonglong)uVar6;
      local_a8 = 0x67;
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      local_e8 = 0;
      local_e0 = 0;
      local_dc = 5;
      dVar8 = local_f8;
      if ((local_ec & 0xffffff) != 0) {
        dVar8 = (double)FUN_140e4b060(&local_f8);
      }
      uVar1 = FUN_140e4a740(&local_c8);
      puVar4 = (undefined8 *)FUN_140ea8b20(&local_e8,uVar1,(longlong)dVar8,0xb);
      if (puVar4 != &local_90) {
        local_78 = *(undefined4 *)puVar4;
        uStack_74 = *(undefined4 *)((longlong)puVar4 + 4);
        uStack_70 = *(undefined4 *)(puVar4 + 1);
        uStack_6c = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_90);
        }
        FUN_140041b80(&local_90,&local_78);
      }
      local_a8 = 0x68;
      ppuVar10 = (undefined8 **)((ulonglong)ppuVar10 & 0xffffffffffffff00);
      uVar9 = uVar9 & 0xffffffffffffff00;
      FUN_140e87440(&local_90,DAT_141a06448,0x80000000,&local_68,uVar9,ppuVar10);
      local_78 = (undefined4)local_68;
      uStack_74 = local_68._4_4_;
      uStack_70 = uStack_60;
      uStack_6c = uStack_5c;
      if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a0);
      }
      FUN_140041b80(&local_a0,&local_78);
      local_a8 = 0x69;
      iVar2 = FUN_140e851f0(&local_a0,&DAT_1419df7b0,DAT_141955260,0);
      if (iVar2 != 0) {
        local_a8 = 0x6b;
        if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_e8);
        }
        local_e8 = 0;
        local_e0 = 0;
        local_dc = 5;
        local_res8 = &local_a0;
        ppuVar10 = &local_res8;
        uVar9 = CONCAT44((int)(uVar9 >> 0x20),DAT_141a06188);
        FUN_140e634e0(param_1,param_2,&local_e8,1,uVar9,ppuVar10);
      }
      local_a8 = 0x6e;
      uVar3 = local_ec & 0xffffff;
      if (uVar3 != 0) break;
LAB_140145cd8:
      local_f8 = local_f8 + 1.0;
    }
    if (uVar3 == 1) {
      local_f8 = (double)FUN_140e4b060(&local_f8);
      local_ec = 0;
      goto LAB_140145cd8;
    }
    if (uVar3 == 7) {
      local_f8 = (double)CONCAT44(local_f8._4_4_,local_f8._0_4_ + 1);
    }
    else if (uVar3 == 10) {
      local_f8 = (double)((longlong)local_f8 + 1);
    }
    else {
      if (uVar3 == 0xd) {
        local_ec = 0;
        goto LAB_140145cd8;
      }
      FUN_140042910(&DAT_14172c3d8,&local_f8,&local_f8);
    }
  } while( true );
}

