// gml_Script___finalize_vertex_buffers_anon_9712___scribble_class_page___scribble_class_page @ 0x14015f140

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script___finalize_vertex_buffers_anon_9712___scribble_class_page___scribble_class_page
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  int iVar1;
  longlong **pplVar2;
  undefined8 *puVar3;
  longlong **pplVar4;
  double *pdVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  code *pcVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  ulonglong in_stack_fffffffffffffed0;
  longlong ***ppplVar14;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  uint uStack_10c;
  longlong *local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  byte local_ec;
  undefined8 local_e8;
  byte local_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined4 uStack_a0;
  uint uStack_9c;
  longlong **local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  uint uStack_3c;
  
  local_d0 = "gml_Script___get_vertex_buffer@anon@7303@__scribble_class_page@__scribble_class_page";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 0xb6;
  pcVar11 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_108,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_4c = 0xffffff;
  local_58 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  uStack_3c = 0xffffff;
  local_48 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0.0;
  pplVar2 = (longlong **)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a07578);
  local_11c = 0;
  local_128 = 0;
  local_5c = 0;
  local_68 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddcf90) &&
     (_Init_thread_header(&DAT_141ddcf90), DAT_141ddcf90 == -1)) {
    DAT_141ddcf98 = (longlong *)FUN_140e63aa0(DAT_141a07518);
    _Init_thread_footer(&DAT_141ddcf90);
  }
  if (DAT_141ddc086 == '\0') {
    FUN_140e64380(DAT_141ddcf98,
                  "gml_Script___get_vertex_buffer@anon@7303@__scribble_class_page@__scribble_class_page"
                 );
    FUN_140e64380(param_1,
                  "gml_Script___get_vertex_buffer@anon@7303@__scribble_class_page@__scribble_class_page"
                 );
  }
  local_c8 = 0xc0;
  if (DAT_141ddc086 == '\0') {
    DAT_141ddc086 = '\x01';
    puVar3 = (undefined8 *)(**(code **)(*DAT_141ddcf98 + 0x10))(DAT_141ddcf98,DAT_141a070e8);
    FUN_140e609c0(DAT_141ddcf98);
    if (puVar3 != &DAT_1419df7b0) {
      local_118._0_4_ = (undefined4)DAT_1419df7b0;
      local_118._4_4_ = DAT_1419df7b0._4_4_;
      uStack_110 = DAT_1419df7b8;
      uStack_10c = DAT_1419df7bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_118);
    }
    FUN_140e60910(1);
  }
  local_c8 = 0xb9;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  pplVar4 = (longlong **)(**(code **)(*param_1 + 8))(param_1,DAT_141a07228);
  if (param_4 < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*param_5;
  }
  uVar12 = (ulonglong)pcVar11 & 0xffffffffffffff00;
  FUN_140e87440(puVar3,DAT_141a06958,0x80000000,&local_58,uVar12,
                in_stack_fffffffffffffed0 & 0xffffffffffffff00);
  uVar13 = (undefined4)(uVar12 >> 0x20);
  if (pplVar4 != &local_108) {
    local_118._0_4_ = *(undefined4 *)pplVar4;
    local_118._4_4_ = *(undefined4 *)((longlong)pplVar4 + 4);
    uStack_110 = *(undefined4 *)(pplVar4 + 1);
    uStack_10c = *(undefined4 *)((longlong)pplVar4 + 0xc);
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_118);
  }
  local_98 = &local_108;
  local_118._0_4_ = (undefined4)local_58;
  local_118._4_4_ = local_58._4_4_;
  uStack_110 = uStack_50;
  uStack_10c = uStack_4c;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_118);
  local_90 = &local_f8;
  ppplVar14 = &local_98;
  uVar12 = CONCAT44(uVar13,DAT_141a01138);
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_128,2,uVar12,ppplVar14);
  if (puVar3 != &local_c0) {
    local_118._0_4_ = *(undefined4 *)puVar3;
    local_118._4_4_ = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_110 = *(undefined4 *)(puVar3 + 1);
    uStack_10c = *(uint *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c0);
    }
    FUN_140041b80(&local_c0,&local_118);
  }
  local_c8 = 0xba;
  iVar1 = FUN_140e851f0(&local_c0,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_c8 = 0xc1;
    pdVar5 = (double *)(**(code **)(*DAT_141ddcf98 + 8))(DAT_141ddcf98,DAT_141a070e8);
    uVar13 = (undefined4)(uVar12 >> 0x20);
    iVar1 = FUN_140e851f0(pdVar5,&DAT_1419df7b0,DAT_141955260,0);
    if (iVar1 == 0) {
      local_c8 = 0xc3;
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      local_128 = 0;
      local_120 = 0;
      local_11c = 5;
      uVar8 = CONCAT44(uVar13,DAT_141a07308);
      FUN_140e634e0(param_1,param_2,&local_128,0,uVar8,0);
      uVar13 = (undefined4)((ulonglong)uVar8 >> 0x20);
      local_c8 = 0xc4;
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      local_128 = 0;
      local_120 = 0;
      local_11c = 5;
      uVar8 = CONCAT44(uVar13,DAT_141a074b8);
      FUN_140e634e0(param_1,param_2,&local_128,0,uVar8,0);
      uVar13 = (undefined4)((ulonglong)uVar8 >> 0x20);
      local_c8 = 0xc5;
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      local_128 = 0;
      local_120 = 0;
      local_11c = 5;
      uVar8 = CONCAT44(uVar13,DAT_141a075d8);
      FUN_140e634e0(param_1,param_2,&local_128,0,uVar8,0);
      uVar13 = (undefined4)((ulonglong)uVar8 >> 0x20);
      local_c8 = 0xc6;
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      local_128 = 0;
      local_120 = 0;
      local_11c = 5;
      uVar8 = CONCAT44(uVar13,DAT_141a07128);
      FUN_140e634e0(param_1,param_2,&local_128,0,uVar8,0);
      uVar13 = (undefined4)((ulonglong)uVar8 >> 0x20);
      local_c8 = 199;
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      local_128 = 0;
      local_120 = 0;
      local_11c = 5;
      uVar8 = CONCAT44(uVar13,DAT_141a07148);
      FUN_140e634e0(param_1,param_2,&local_128,0,uVar8,0);
      uVar13 = (undefined4)((ulonglong)uVar8 >> 0x20);
      local_c8 = 200;
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      local_128 = 0;
      local_120 = 0;
      local_11c = 5;
      local_118._0_4_ = _DAT_1419e1e60;
      local_118._4_4_ = uRam00000001419e1e64;
      uStack_110 = uRam00000001419e1e68;
      uStack_10c = uRam00000001419e1e6c;
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_118);
      local_98 = &local_108;
      local_118._0_4_ = _DAT_1419e1e60;
      local_118._4_4_ = uRam00000001419e1e64;
      uStack_110 = uRam00000001419e1e68;
      uStack_10c = uRam00000001419e1e6c;
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_118);
      local_90 = &local_f8;
      uVar8 = CONCAT44(uVar13,DAT_141a07328);
      FUN_140e634e0(param_1,param_2,&local_128,2,uVar8,&local_98);
      uVar13 = (undefined4)((ulonglong)uVar8 >> 0x20);
      local_c8 = 0xc9;
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      local_128 = 0;
      local_120 = 0;
      local_11c = 5;
      puVar6 = (undefined4 *)(**(code **)(*DAT_141ddcf98 + 0x10))(DAT_141ddcf98,DAT_141a070e8);
      FUN_140e609c0(DAT_141ddcf98);
      uVar8 = CONCAT44(uVar13,DAT_141a07528);
      puVar7 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_128,0,uVar8,0);
      uVar13 = (undefined4)((ulonglong)uVar8 >> 0x20);
      if (puVar7 != puVar6) {
        local_118._0_4_ = *puVar7;
        local_118._4_4_ = puVar7[1];
        uStack_110 = puVar7[2];
        uStack_10c = puVar7[3];
        if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_118);
      }
      FUN_140e60910(1);
    }
    local_c8 = 0xcc;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    uVar8 = CONCAT44(uVar13,DAT_141a071e8);
    puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_128,0,uVar8,0);
    uVar13 = (undefined4)((ulonglong)uVar8 >> 0x20);
    if (puVar3 != &local_a8) {
      local_118._0_4_ = *(undefined4 *)puVar3;
      local_118._4_4_ = *(undefined4 *)((longlong)puVar3 + 4);
      uStack_110 = *(undefined4 *)(puVar3 + 1);
      uStack_10c = *(uint *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      FUN_140041b80(&local_a8,&local_118);
    }
    local_c8 = 0xcd;
    if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
      dVar9 = *pdVar5;
    }
    else {
      dVar9 = (double)FUN_140e4b060(pdVar5);
    }
    dVar10 = local_a8;
    if ((uStack_9c & 0xffffff) != 0) {
      dVar10 = (double)FUN_140e4b060(&local_a8);
    }
    FUN_140ed20c0((longlong)dVar10,(longlong)dVar9);
    local_c8 = 0xd0;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_68);
    }
    local_68 = 0;
    local_60 = 0;
    local_5c = 5;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a07418);
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_fc = 6;
    local_108 = param_1;
    uVar8 = FUN_140e5c910();
    FUN_140e42c10(uVar8,param_1);
    local_98 = &local_108;
    if (puVar3 != &local_f8) {
      local_118._0_4_ = *(undefined4 *)puVar3;
      local_118._4_4_ = *(undefined4 *)((longlong)puVar3 + 4);
      uStack_110 = *(undefined4 *)(puVar3 + 1);
      uStack_10c = *(uint *)((longlong)puVar3 + 0xc);
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_118);
    }
    local_90 = &local_f8;
    uVar8 = CONCAT44(uVar13,DAT_141a04a48);
    puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_68,1,uVar8,&local_98);
    uVar13 = (undefined4)((ulonglong)uVar8 >> 0x20);
    if (puVar3 != &local_e8) {
      local_118._0_4_ = *(undefined4 *)puVar3;
      local_118._4_4_ = *(undefined4 *)((longlong)puVar3 + 4);
      uStack_110 = *(undefined4 *)(puVar3 + 1);
      uStack_10c = *(uint *)((longlong)puVar3 + 0xc);
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_118);
    }
    local_88 = &local_e8;
    uVar8 = CONCAT44(uVar13,DAT_1419fe568);
    FUN_140e634e0(param_1,param_2,&local_128,2,uVar8,&local_90);
    uVar13 = (undefined4)((ulonglong)uVar8 >> 0x20);
    local_c8 = 0xd1;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    pplVar4 = (longlong **)(**(code **)(*param_1 + 8))(param_1,DAT_141a070c8);
    if (pplVar4 != &local_108) {
      local_118._0_4_ = *(undefined4 *)pplVar4;
      local_118._4_4_ = *(undefined4 *)((longlong)pplVar4 + 4);
      uStack_110 = *(undefined4 *)(pplVar4 + 1);
      uStack_10c = *(uint *)((longlong)pplVar4 + 0xc);
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_118);
    }
    local_98 = &local_108;
    local_90 = &local_a8;
    uVar8 = CONCAT44(uVar13,DAT_1419fe568);
    FUN_140e634e0(param_1,param_2,&local_128,2,uVar8,&local_98);
    uVar13 = (undefined4)((ulonglong)uVar8 >> 0x20);
    local_c8 = 0xd5;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    FUN_140e609c0(DAT_141a729d8);
    FUN_140e645a0(&local_118,
                  gml_Script___ensure_glyph_grid_anon_9206___scribble_class_page___scribble_class_page
                  ,0);
    if ((longlong **)&local_118 != pplVar2) {
      local_78 = (undefined4)local_118;
      uStack_74 = local_118._4_4_;
      uStack_70 = uStack_110;
      uStack_6c = uStack_10c;
      if ((1 << ((byte)*(undefined4 *)((longlong)pplVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pplVar2);
      }
      FUN_140041b80(pplVar2,&local_78);
    }
    FUN_140e60910(1);
    if (pplVar2 != &local_108) {
      local_78 = *(undefined4 *)pplVar2;
      uStack_74 = *(undefined4 *)((longlong)pplVar2 + 4);
      uStack_70 = *(undefined4 *)(pplVar2 + 1);
      uStack_6c = *(uint *)((longlong)pplVar2 + 0xc);
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_78);
    }
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_98 = &local_108;
    local_90 = &local_a8;
    if (param_4 < 1) {
      puVar3 = &DAT_1419df7b0;
LAB_14015fc8a:
      local_78 = *(undefined4 *)puVar3;
      uStack_74 = *(undefined4 *)((longlong)puVar3 + 4);
      uStack_70 = *(undefined4 *)(puVar3 + 1);
      uStack_6c = *(uint *)((longlong)puVar3 + 0xc);
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_78);
    }
    else {
      puVar3 = (undefined8 *)*param_5;
      if (puVar3 != &local_e8) goto LAB_14015fc8a;
    }
    local_88 = &local_e8;
    uVar8 = CONCAT44(uVar13,DAT_1419fd6d8);
    puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_128,3,uVar8,&local_98);
    uVar13 = (undefined4)((ulonglong)uVar8 >> 0x20);
    if (puVar3 != &local_c0) {
      local_78 = *(undefined4 *)puVar3;
      uStack_74 = *(undefined4 *)((longlong)puVar3 + 4);
      uStack_70 = *(undefined4 *)(puVar3 + 1);
      uStack_6c = *(uint *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c0);
      }
      FUN_140041b80(&local_c0,&local_78);
    }
    local_c8 = 0xda;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    pplVar2 = (longlong **)(**(code **)(*param_1 + 8))(param_1,DAT_141a07368);
    if (pplVar2 != &local_108) {
      local_78 = *(undefined4 *)pplVar2;
      uStack_74 = *(undefined4 *)((longlong)pplVar2 + 4);
      uStack_70 = *(undefined4 *)(pplVar2 + 1);
      uStack_6c = *(uint *)((longlong)pplVar2 + 0xc);
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_78);
    }
    local_98 = &local_108;
    local_90 = &local_c0;
    ppplVar14 = &local_98;
    uVar12 = CONCAT44(uVar13,DAT_1419fe568);
    FUN_140e634e0(param_1,param_2,&local_128,2,uVar12,ppplVar14);
    local_c8 = 0xdb;
    uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a07228);
    (**(code **)(*DAT_141ddcf98 + 8))(DAT_141ddcf98,DAT_141a070e8);
    if (param_4 < 1) {
      param_5 = &DAT_1419df7b0;
    }
    else {
      param_5 = (undefined8 *)*param_5;
    }
    FUN_140e87440(param_5,DAT_141a06958,0x80000000,&local_58,uVar12 & 0xffffffffffffff00,
                  (ulonglong)ppplVar14 & 0xffffffffffffff00);
    FUN_140e98ef0(param_1,param_2,uVar8,&local_58,&local_c0);
    local_c8 = 0xdd;
    if (&local_a8 == param_3) goto LAB_14015fe8a;
    local_78 = (undefined4)local_a8;
    uStack_74 = local_a8._4_4_;
    uStack_70 = uStack_a0;
    uStack_6c = uStack_9c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    puVar3 = (undefined8 *)&local_78;
  }
  else {
    local_c8 = 0xbc;
    FUN_140e87440(&local_c0,DAT_141a07248,0x80000000,&local_48,uVar12 & 0xffffffffffffff00,
                  (ulonglong)ppplVar14 & 0xffffffffffffff00);
    if (&local_48 == param_3) goto LAB_14015fe8a;
    local_118._0_4_ = (undefined4)local_48;
    local_118._4_4_ = local_48._4_4_;
    uStack_110 = uStack_40;
    uStack_10c = uStack_3c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    puVar3 = &local_118;
  }
  FUN_140041b80(param_3,puVar3);
LAB_14015fe8a:
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  _eh_vector_destructor_iterator_(&local_108,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return param_3;
}

