// gml_Script_starting_format_anon_7528___scribble_class_element___scribble_class_element @ 0x140111ee0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_starting_format_anon_7528___scribble_class_element___scribble_class_element
          (longlong *param_1,longlong *param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  double dVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong **pplVar11;
  undefined4 *puVar12;
  uint uVar13;
  bool bVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined4 uVar17;
  uint uVar18;
  longlong *local_res8;
  longlong *local_res10;
  undefined8 *local_res18;
  undefined4 local_res20;
  undefined8 **ppuVar19;
  ulonglong in_stack_fffffffffffffdb0;
  ulonglong uVar20;
  undefined8 local_248;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  ulonglong local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  char *local_200;
  undefined4 local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined8 local_1d0;
  undefined4 local_1c4;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined8 *local_1b0;
  longlong **local_1a8;
  undefined8 *local_1a0;
  undefined4 *local_198;
  longlong **local_190;
  undefined8 local_188;
  byte local_17c;
  longlong *local_178;
  undefined4 local_16c;
  undefined8 local_168;
  byte local_15c;
  undefined4 local_158 [3];
  byte local_14c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  longlong *local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong *local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  longlong *local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  uint local_b8 [2];
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined1 local_88 [16];
  longlong local_78;
  
  local_res20 = 0;
  local_200 = "gml_Script_draw@anon@5117@__scribble_class_element@__scribble_class_element";
  local_208 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_208;
  local_1f8 = 0xa7;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_140041df0(local_b8,param_4,3,param_5);
  _eh_vector_constructor_iterator_(&local_188,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_dc = 0xffffff;
  local_e8 = (longlong *)0x0;
  local_1c4 = 0xffffff;
  local_1d0 = 0;
  uStack_10c = 0xffffff;
  local_118 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_11c = 0xffffff;
  local_128 = (longlong *)0x0;
  local_fc = 0xffffff;
  local_108 = (longlong *)0x0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_23c = 0;
  local_248 = 0;
  local_1d4 = 0;
  local_1e0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddce08) &&
     (_Init_thread_header(&DAT_141ddce08), DAT_141ddce08 == -1)) {
    DAT_141ddcef8 = (longlong *)FUN_140e63aa0(DAT_141a04e68);
    _Init_thread_footer(&DAT_141ddce08);
  }
  puVar9 = local_b0;
  uVar18 = local_b8[0];
  local_1f8 = 0xa7;
  puVar16 = &DAT_1419df7b0;
  if ((int)local_b8[0] < 3) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_b0[2];
  }
  iVar3 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (((iVar3 == 0) && (local_1f8 = 0xa7, 2 < (int)uVar18)) &&
     (puVar4 = (undefined8 *)puVar9[2], puVar4 != &DAT_1419df7b0)) {
    local_228 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_220 = DAT_1419df7b8;
    uStack_21c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_228);
  }
  if (DAT_141ddc07e == '\0') {
    FUN_140e64380(DAT_141ddcef8,
                  "gml_Script_draw@anon@5117@__scribble_class_element@__scribble_class_element");
    FUN_140e64380(local_res8,
                  "gml_Script_draw@anon@5117@__scribble_class_element@__scribble_class_element");
  }
  local_1f8 = 0xa9;
  if (DAT_141ddc07e == '\0') {
    DAT_141ddc07e = '\x01';
    puVar4 = (undefined8 *)(**(code **)(*DAT_141ddcef8 + 0x10))(DAT_141ddcef8,DAT_141a04cd8);
    if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_248 = 0;
    local_240 = 0;
    local_23c = 5;
    local_228 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_220 = DAT_1419df7b8;
    uStack_21c = DAT_1419df7bc;
    if ((1 << ((byte)_local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_228);
    local_1b0 = &local_188;
    ppuVar19 = &local_1b0;
    uVar5 = gml_Script___scribble_texture_get_material(local_res8,local_res10,&local_248,1,ppuVar19)
    ;
    uVar15 = (ulonglong)ppuVar19 & 0xffffffffffffff00;
    FUN_140e87440(uVar5,DAT_141a05158,0x80000000,&local_a8,uVar15,
                  in_stack_fffffffffffffdb0 & 0xffffffffffffff00);
    uVar17 = (undefined4)(uVar15 >> 0x20);
    FUN_140e609c0(DAT_141ddcef8);
    if (&local_a8 != puVar4) {
      local_228 = local_a8;
      uStack_220 = uStack_a0;
      uStack_21c = uStack_9c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_228);
    }
    FUN_140e60910(1);
    if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e0);
    }
    local_1e0 = 0;
    local_1d8 = 0;
    local_1d4 = 5;
    puVar6 = (ulonglong *)(**(code **)(*DAT_141ddcef8 + 0x10))(DAT_141ddcef8,DAT_141a05f68);
    uVar13 = (int)(DAT_141a059c8 | 0x5000000) >> 0x18 & 0xff;
    if (uVar13 == 0xf) {
      uVar13 = 0x4000004;
    }
    else {
      uVar13 = uVar13 | 0x1000000;
    }
    uStack_21c = 0xf;
    local_228 = CONCAT44(uVar13,DAT_141a059c8) & 0xffffffff00ffffff;
    local_218 = CONCAT44(uVar13,DAT_141a059c8) & 0xffffffff00ffffff;
    uStack_210 = uStack_220;
    uStack_20c = 0xf;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_218);
    local_1a8 = &local_178;
    FUN_140e609c0(DAT_141ddcef8);
    puVar7 = (ulonglong *)
             FUN_140e634e0(local_res8,local_res10,&local_1e0,1,CONCAT44(uVar17,DAT_1419fd6d8),
                           &local_1a8);
    if (puVar7 != puVar6) {
      local_228 = *puVar7;
      uStack_220 = (undefined4)puVar7[1];
      uStack_21c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_228);
    }
    FUN_140e60910(1);
  }
  plVar10 = local_res10;
  local_1f8 = 0xb1;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_dc = 6;
  local_e8 = plVar10;
  uVar5 = FUN_140e5c910();
  FUN_140e42c10(uVar5,plVar10);
  local_1f8 = 0xb4;
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_248 = 0;
  local_240 = 0;
  local_23c = 5;
  uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a05ac8);
  local_228 = CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
  uStack_220 = uRam00000001419df7c8;
  uStack_21c = uRam00000001419df7cc;
  if ((1 << ((byte)_local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  FUN_140041b80(&local_188,&local_228);
  local_1b0 = &local_188;
  puVar4 = (undefined8 *)FUN_140e63610(local_res8,local_res10,&local_248,1,uVar5,&local_1b0);
  uVar17 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (puVar4 != &local_1d0) {
    local_228 = *puVar4;
    uStack_220 = *(undefined4 *)(puVar4 + 1);
    uStack_21c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d0);
    }
    FUN_140041b80(&local_1d0,&local_228);
  }
  local_1f8 = 0xb5;
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_248 = 0;
  local_240 = 0;
  local_23c = 5;
  local_1b0 = &local_1d0;
  ppuVar19 = &local_1b0;
  uVar15 = CONCAT44(uVar17,DAT_1419fcb88);
  uVar5 = FUN_140e634e0(local_res8,local_res10,&local_248,1,uVar15,ppuVar19);
  cVar2 = FUN_140e491e0(uVar5);
  if (cVar2 == '\0') {
    local_1f8 = 0xb5;
    if (param_3 != &DAT_1419df7b0) {
      local_228 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
      uStack_220 = DAT_1419df7b8;
      uStack_21c = DAT_1419df7bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_228);
    }
    goto LAB_140113539;
  }
  local_1f8 = 0xb8;
  uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a05e58);
  uVar8 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a05af8);
  uVar20 = (ulonglong)ppuVar19 & 0xffffffffffffff00;
  uVar15 = uVar15 & 0xffffffffffffff00;
  FUN_140e87440(uVar8,DAT_141a04e98,0x80000000,&local_118,uVar15,uVar20);
  iVar3 = FUN_140e851f0(uVar5,&local_118,DAT_141955260,1);
  if (iVar3 != -2 && iVar3 < 0) {
    local_1f8 = 0xba;
    puVar9 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a04ce8);
    puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a051f8);
    FUN_140e85f80(local_res8,DAT_141a02be8,0x80000000,&local_f8);
    local_12c = local_ec;
    local_130 = local_f0;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) == 0) {
      local_138 = local_f8;
    }
    else {
      FUN_1400419b0(&local_138,&local_f8);
    }
    local_res20 = 1;
    local_1b4 = 0;
    local_1c0 = 0x40d0468000000000;
    FUN_140046500(&local_138,&local_1c0);
    if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c0);
    }
    local_1e4 = *(undefined4 *)((longlong)puVar9 + 0xc);
    local_1e8 = *(undefined4 *)(puVar9 + 1);
    if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) == 0) {
      local_1f0 = *puVar9;
    }
    else {
      FUN_1400419b0(&local_1f0,puVar9);
    }
    local_res20 = 3;
    FUN_140042560(&local_1f0,&local_138);
    FUN_1400460e0(puVar4,&local_1f0);
    local_res20 = 1;
    if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f0);
    }
    local_res20 = 0;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_1f8 = 0xbb;
    puVar9 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a051f8);
    FUN_140e609c0(local_res8);
    if ((*(uint *)((longlong)puVar9 + 0xc) & 0xffffff) == 0) {
      uVar17 = (undefined4)*puVar9;
    }
    else {
      uVar17 = FUN_140e4b060(puVar9);
    }
    uVar5 = FUN_1412a79b0(uVar17,0x40cfff8000000000);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = uVar5;
    FUN_140e60910(1);
  }
  local_1f8 = 0xbe;
  puVar9 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a05e58);
  local_138 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a05af8);
  uVar20 = uVar20 & 0xffffffffffffff00;
  uVar15 = uVar15 & 0xffffffffffffff00;
  FUN_140e87440(local_138,DAT_141a04e98,0x80000000,&local_118,uVar15,uVar20);
  FUN_140e609c0(local_res8);
  if (&local_118 != puVar9) {
    local_228 = local_118;
    uStack_220 = uStack_110;
    uStack_21c = uStack_10c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    FUN_140041b80(puVar9,&local_228);
  }
  FUN_140e60910(1);
  local_1f8 = 0xc0;
  uVar5 = (**(code **)(*DAT_141ddcef8 + 8))(DAT_141ddcef8,DAT_141a04cd8);
  iVar3 = FUN_140e63cb0(local_88,&local_res8,&local_res10,uVar5);
  uVar13 = 0x3ff00000;
  if (0 < iVar3) {
    do {
      local_1f8 = 0xc3;
      uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a05d28);
      cVar2 = FUN_140e491e0(uVar5);
      if (cVar2 == '\0') {
        puVar9 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a05a68);
        uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a05fb8);
        local_cc = *(undefined4 *)((longlong)puVar9 + 0xc);
        local_d0 = *(undefined4 *)(puVar9 + 1);
        if ((1 << ((byte)local_cc & 0x1f) & 0x46U) == 0) {
          local_d8 = *puVar9;
        }
        else {
          FUN_1400419b0(&local_d8,puVar9);
        }
        local_res20 = 4;
        FUN_1400460e0(&local_d8,uVar5);
        uStack_20c = 0;
        local_218 = 0;
        iVar3 = FUN_140e851f0(&local_d8,&local_218,DAT_141955260,1);
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        local_res20 = 0;
        if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d8);
        }
        if (iVar3 < 1) goto LAB_140112c61;
        local_1f8 = 0xc5;
        puVar9 = (undefined8 *)(**(code **)(*local_res10 + 8))(local_res10,DAT_141a051f8);
        uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a056a8);
        puVar4 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a05a68);
        uVar8 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a05fb8);
        plVar10 = (longlong *)(**(code **)(*local_res10 + 0x10))(local_res10,DAT_141a05228);
        FUN_140e609c0(local_res10);
        local_1b4 = *(undefined4 *)((longlong)puVar4 + 0xc);
        local_1b8 = *(undefined4 *)(puVar4 + 1);
        if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) == 0) {
          local_1c0 = *puVar4;
        }
        else {
          FUN_1400419b0(&local_1c0,puVar4);
        }
        local_res20 = 8;
        FUN_1400460e0(&local_1c0,uVar8);
        local_1e4 = *(undefined4 *)((longlong)puVar9 + 0xc);
        local_1e8 = *(undefined4 *)(puVar9 + 1);
        if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) == 0) {
          local_1f0 = *puVar9;
        }
        else {
          FUN_1400419b0(&local_1f0,puVar9);
        }
        local_res20 = 0x18;
        FUN_1400460e0(&local_1f0,uVar5);
        local_bc = local_1e4;
        local_c0 = local_1e8;
        if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) == 0) {
          local_c8 = local_1f0;
        }
        else {
          FUN_1400419b0(&local_c8,&local_1f0);
        }
        local_res20 = 0x38;
        FUN_140046880(&local_c8,&local_1c0);
        iVar3 = FUN_140e851f0(&local_c8,puVar4,DAT_141955260,1);
        if ((1 << ((byte)*(undefined4 *)((longlong)plVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(plVar10);
        }
        *(undefined4 *)((longlong)plVar10 + 0xc) = 0xd;
        if (iVar3 == -2 || -1 < iVar3) {
          uVar18 = 0;
        }
        else {
          uVar18 = 0x3ff00000;
        }
        *plVar10 = (ulonglong)uVar18 << 0x20;
        local_res20 = 0x18;
        if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c8);
        }
        local_res20 = 8;
        if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f0);
        }
        local_res20 = 0;
        if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c0);
        }
        FUN_140e60910(1);
      }
      else {
LAB_140112c61:
        local_1f8 = 0xc9;
        puVar9 = (undefined8 *)(**(code **)(*local_res10 + 0x10))(local_res10,DAT_141a05228);
        uStack_21c = 0xd;
        local_228 = 0x3ff0000000000000;
        if (&local_228 != puVar9) {
          local_238 = 0;
          uStack_234 = 0x3ff00000;
          uStack_230 = uStack_220;
          uStack_22c = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar9);
          }
          FUN_140041b80(puVar9,&local_238);
        }
      }
      cVar2 = FUN_140e643f0(local_88,&local_res8,&local_res10);
    } while (cVar2 != '\0');
    param_3 = local_res18;
    uVar18 = local_b8[0];
  }
  FUN_140e63970(local_88,&local_res8,&local_res10);
  DAT_141a67c38 = 1;
  FUN_140e87440(local_138,DAT_141a04e98,0x80000000,&local_118,uVar15 & 0xffffffffffffff00,
                uVar20 & 0xffffffffffffff00);
  DAT_141a67c38 = 0;
  DAT_141a72aac = 0;
  local_1f8 = 0xcd;
  uStack_20c = 0xf;
  local_218 = 0x10000080000000a;
  dVar1 = (double)FUN_140e4b060(&local_218);
  FUN_140ec9e10((int)dVar1);
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_1f8 = 0xce;
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_248 = 0;
  local_240 = 0;
  local_23c = 5;
  uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a04d78);
  puVar9 = local_b0;
  if ((int)uVar18 < 3) {
    puVar4 = &DAT_1419df7b0;
LAB_140112e04:
    local_238 = *(undefined4 *)puVar4;
    uStack_234 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_230 = *(undefined4 *)(puVar4 + 1);
    uStack_22c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_238);
  }
  else {
    puVar4 = (undefined8 *)local_b0[2];
    if (puVar4 != &local_188) goto LAB_140112e04;
  }
  local_1b0 = &local_188;
  local_1a8 = &local_e8;
  FUN_140e63610(local_res8,local_res10,&local_248,2,uVar5,&local_1b0);
  uVar17 = (undefined4)((ulonglong)uVar5 >> 0x20);
  local_1f8 = 0xd1;
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_248 = 0;
  local_240 = 0;
  local_23c = 5;
  local_238 = _DAT_1419e1d90;
  uStack_234 = uRam00000001419e1d94;
  uStack_230 = uRam00000001419e1d98;
  uStack_22c = uRam00000001419e1d9c;
  if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  FUN_140041b80(&local_188,&local_238);
  local_1b0 = &local_188;
  pplVar11 = (longlong **)
             FUN_140e634e0(local_res8,local_res10,&local_248,1,CONCAT44(uVar17,DAT_141a057f8),
                           &local_1b0);
  if (pplVar11 != &local_128) {
    local_238 = *(undefined4 *)pplVar11;
    uStack_234 = *(undefined4 *)((longlong)pplVar11 + 4);
    uStack_230 = *(undefined4 *)(pplVar11 + 1);
    uStack_22c = *(undefined4 *)((longlong)pplVar11 + 0xc);
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_238);
  }
  local_1f8 = 0xd2;
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_248 = 0;
  local_240 = 0;
  local_23c = 5;
  if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e0);
  }
  local_1e0 = 0;
  local_1d8 = 0;
  local_1d4 = 5;
  uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a06058);
  local_1b0 = &local_1d0;
  if ((int)uVar18 < 1) {
    pplVar11 = (longlong **)&DAT_1419df7b0;
LAB_140112fdd:
    local_238 = *(undefined4 *)pplVar11;
    uStack_234 = *(undefined4 *)((longlong)pplVar11 + 4);
    uStack_230 = *(undefined4 *)(pplVar11 + 1);
    uStack_22c = *(undefined4 *)((longlong)pplVar11 + 0xc);
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_238);
  }
  else {
    pplVar11 = (longlong **)*puVar9;
    if (pplVar11 != &local_178) goto LAB_140112fdd;
  }
  if (((int)uVar18 < 2) ||
     (puVar16 = (undefined8 *)puVar9[1], local_1a8 = &local_178, puVar16 != &local_168)) {
    local_238 = *(undefined4 *)puVar16;
    uStack_234 = *(undefined4 *)((longlong)puVar16 + 4);
    uStack_230 = *(undefined4 *)(puVar16 + 1);
    uStack_22c = *(undefined4 *)((longlong)puVar16 + 0xc);
    local_1a8 = &local_178;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_238);
  }
  local_1a0 = &local_168;
  puVar12 = (undefined4 *)FUN_140e63610(local_res8,local_res10,&local_1e0,3,uVar5,&local_1b0);
  uVar17 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (puVar12 != local_158) {
    local_238 = *puVar12;
    uStack_234 = puVar12[1];
    uStack_230 = puVar12[2];
    uStack_22c = puVar12[3];
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_158);
    }
    FUN_140041b80(local_158,&local_238);
  }
  local_198 = local_158;
  local_190 = &local_128;
  uVar5 = CONCAT44(uVar17,DAT_141a05ce8);
  pplVar11 = (longlong **)FUN_140e634e0(local_res8,local_res10,&local_248,2,uVar5,&local_198);
  uVar17 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (pplVar11 != &local_108) {
    local_238 = *(undefined4 *)pplVar11;
    uStack_234 = *(undefined4 *)((longlong)pplVar11 + 4);
    uStack_230 = *(undefined4 *)(pplVar11 + 1);
    uStack_22c = *(undefined4 *)((longlong)pplVar11 + 0xc);
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_238);
  }
  local_1f8 = 0xd3;
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_248 = 0;
  local_240 = 0;
  local_23c = 5;
  local_238 = _DAT_1419e1d90;
  uStack_234 = uRam00000001419e1d94;
  uStack_230 = uRam00000001419e1d98;
  uStack_22c = uRam00000001419e1d9c;
  if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  FUN_140041b80(&local_188,&local_238);
  local_1b0 = &local_188;
  local_1a8 = &local_108;
  ppuVar19 = &local_1b0;
  uVar15 = CONCAT44(uVar17,DAT_141a05068);
  FUN_140e634e0(local_res8,local_res10,&local_248,2,uVar15,ppuVar19);
  local_1f8 = 0xd6;
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_248 = 0;
  local_240 = 0;
  local_23c = 5;
  puVar16 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a05148);
  uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a04f38);
  FUN_140e87440(&local_1d0,DAT_141a04d18,0x80000000,&local_98,uVar15 & 0xffffffffffffff00,
                (ulonglong)ppuVar19 & 0xffffffffffffff00);
  uStack_20c = 0;
  local_218 = 0;
  iVar3 = FUN_140e851f0(uVar5,&local_218,DAT_141955260,1);
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if (iVar3 < 1) {
    uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a05d78);
    uStack_20c = 0;
    local_218 = 0;
    iVar3 = FUN_140e851f0(uVar5,&local_218,DAT_141955260,1);
    bVar14 = 0 < iVar3;
    if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
  }
  else {
    bVar14 = true;
  }
  if (puVar16 != &local_188) {
    local_238 = *(undefined4 *)puVar16;
    uStack_234 = *(undefined4 *)((longlong)puVar16 + 4);
    uStack_230 = *(undefined4 *)(puVar16 + 1);
    uStack_22c = *(undefined4 *)((longlong)puVar16 + 0xc);
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_238);
  }
  local_1b0 = &local_188;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_16c = 0xd;
  if (!bVar14) {
    uVar13 = 0;
  }
  local_178 = (longlong *)((ulonglong)uVar13 << 0x20);
  switch(local_1c4) {
  default:
switchD_1401133b4_caseD_1:
    uVar5 = 0;
    local_1a8 = &local_178;
    break;
  case 6:
    uVar5 = local_1d0;
    local_1a8 = &local_178;
    break;
  case 0xf:
    iVar3 = (int)((ulonglong)local_1d0 >> 0x20);
    if ((iVar3 != 0x1000000) && (iVar3 != 0x4000001)) goto switchD_1401133b4_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    local_1a8 = &local_178;
    uVar17 = FUN_140e4a8b0(&local_1d0);
    uVar5 = FUN_140e87250(uVar17);
  }
  puVar16 = &local_98;
  FUN_140e63610(uVar5,local_res10,&local_248,2,puVar16,&local_1b0);
  uVar17 = (undefined4)((ulonglong)puVar16 >> 0x20);
  local_1f8 = 0xd9;
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_248 = 0;
  local_240 = 0;
  local_23c = 5;
  local_238 = _DAT_1419e1d90;
  uStack_234 = uRam00000001419e1d94;
  uStack_230 = uRam00000001419e1d98;
  uStack_22c = uRam00000001419e1d9c;
  if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  FUN_140041b80(&local_188,&local_238);
  local_1b0 = &local_188;
  local_1a8 = &local_128;
  FUN_140e634e0(local_res8,local_res10,&local_248,2,CONCAT44(uVar17,DAT_141a05068),&local_1b0);
  local_1f8 = 0xda;
  FUN_140ec9dc0();
  local_1f8 = 0xe5;
  puVar16 = (undefined8 *)(**(code **)(*DAT_141ddcef8 + 8))(DAT_141ddcef8,DAT_141a05f68);
  if (puVar16 != param_3) {
    local_238 = *(undefined4 *)puVar16;
    uStack_234 = *(undefined4 *)((longlong)puVar16 + 4);
    uStack_230 = *(undefined4 *)(puVar16 + 1);
    uStack_22c = *(undefined4 *)((longlong)puVar16 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_238);
  }
  if (local_78 != 0) {
    FUN_140e4cd60();
    local_78 = 0;
  }
  puVar9 = local_b0;
LAB_140113539:
  if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e0);
  }
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d0);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(&local_188,0x10,5,FUN_140041b30);
  if (0 < (int)uVar18) {
    uVar15 = (ulonglong)uVar18;
    puVar16 = puVar9;
    do {
      puVar4 = (undefined8 *)*puVar16;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 5;
      puVar16 = puVar16 + 1;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  FUN_140e4cd60(puVar9);
  DAT_141dc7a50 = (undefined8 *)local_208;
  return param_3;
}

