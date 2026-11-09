// gml_Script___scribble_surface_get_material @ 0x1402047a0

undefined8 **
gml_Script___scribble_surface_get_material
          (undefined8 param_1,undefined8 param_2,undefined8 **param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 **ppuVar5;
  undefined8 uVar6;
  double *pdVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 ***pppuVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  ulonglong in_stack_fffffffffffffe70;
  ulonglong uVar17;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  uint uStack_16c;
  double local_168;
  uint local_15c;
  undefined8 *local_158;
  uint uStack_14c;
  undefined8 *local_148;
  undefined4 local_140;
  uint local_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 *local_128;
  undefined4 local_11c;
  undefined8 *local_118;
  byte local_10c;
  undefined8 *local_108;
  byte local_fc;
  undefined8 **local_f8;
  undefined8 **local_f0;
  undefined8 **local_e8;
  undefined8 local_e0;
  char *local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  longlong local_b8;
  uint local_ac;
  double local_a8;
  undefined4 local_9c;
  undefined8 *local_98;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined8 *local_88;
  undefined4 uStack_80;
  uint uStack_7c;
  undefined8 *local_78;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58 [2];
  undefined8 *local_50;
  
  local_d8 = "gml_Script___scribble_sprite_get_texture_index";
  local_e0 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e0;
  local_d0 = 6;
  FUN_140041df0(local_58,param_4,2,param_5);
  uVar3 = 1;
  _eh_vector_constructor_iterator_(&local_128,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_7c = 0xffffff;
  local_88 = (undefined8 *)0x0;
  local_13c = 0xffffff;
  local_148 = (undefined8 *)0x0;
  uStack_14c = 0xffffff;
  local_158 = (undefined8 *)0x0;
  local_9c = 0xffffff;
  local_a8 = 0.0;
  uStack_6c = 0xffffff;
  local_78 = (undefined8 *)0x0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_15c = 0xffffff;
  local_168 = 0.0;
  uStack_8c = 0xffffff;
  local_98 = (undefined8 *)0x0;
  local_17c = 0;
  local_188 = 0;
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = (undefined8 *)0x0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dddab0) &&
     (_Init_thread_header(&DAT_141dddab0), DAT_141dddab0 == -1)) {
    DAT_141dddab8 = (longlong *)FUN_140e63aa0(DAT_141a0a448);
    _Init_thread_footer(&DAT_141dddab0);
  }
  if (DAT_141ddc0a2 == '\0') {
    FUN_140e64380(DAT_141dddab8,"gml_Script___scribble_sprite_get_texture_index");
    FUN_140e64380(param_1,"gml_Script___scribble_sprite_get_texture_index");
  }
  local_d0 = 8;
  if (DAT_141ddc0a2 == '\0') {
    DAT_141ddc0a2 = '\x01';
    ppuVar5 = (undefined8 **)(**(code **)(*DAT_141dddab8 + 0x10))(DAT_141dddab8,DAT_141a0a438);
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    local_178 = (undefined8 *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_170 = DAT_1419df7b8;
    uStack_16c = DAT_1419df7bc;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_178);
    local_e8 = &local_108;
    pppuVar14 = &local_e8;
    uVar6 = gml_Script___scribble_texture_get_material(param_1,param_2,&local_188,1,pppuVar14);
    uVar11 = (ulonglong)pppuVar14 & 0xffffffffffffff00;
    FUN_140e87440(uVar6,DAT_141a0a458,0x80000000,&local_88,uVar11,
                  in_stack_fffffffffffffe70 & 0xffffffffffffff00);
    uVar3 = (undefined4)(uVar11 >> 0x20);
    FUN_140e609c0(DAT_141dddab8);
    if (&local_88 != ppuVar5) {
      local_178 = local_88;
      uStack_170 = uStack_80;
      uStack_16c = uStack_7c;
      if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(ppuVar5);
      }
      FUN_140041b80(ppuVar5,&local_178);
    }
    FUN_140e60910(1);
  }
  local_d0 = 10;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  puVar10 = &DAT_1419df7b0;
  uVar11 = (ulonglong)local_58[0];
  if ((int)local_58[0] < 1) {
    ppuVar5 = (undefined8 **)&DAT_1419df7b0;
LAB_140204ac7:
    local_178 = *ppuVar5;
    uStack_170 = *(undefined4 *)(ppuVar5 + 1);
    uStack_16c = *(uint *)((longlong)ppuVar5 + 0xc);
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_178);
  }
  else {
    ppuVar5 = (undefined8 **)*local_50;
    if (ppuVar5 != &local_128) goto LAB_140204ac7;
  }
  local_f8 = &local_128;
  uVar15 = CONCAT44(uVar3,DAT_141a04628);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_188,1,uVar15,&local_f8);
  uVar3 = (undefined4)((ulonglong)uVar15 >> 0x20);
  cVar1 = FUN_140e491e0(uVar6);
  if (cVar1 == '\0') {
    local_d0 = 0x11;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    *(undefined4 *)((longlong)param_3 + 0xc) = 0;
    *param_3 = (undefined8 *)&DAT_bff0000000000000;
    goto LAB_1402055bb;
  }
  local_d0 = 0x14;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  if ((int)local_58[0] < 1) {
    ppuVar5 = (undefined8 **)&DAT_1419df7b0;
LAB_140204bb6:
    local_178 = *ppuVar5;
    uStack_170 = *(undefined4 *)(ppuVar5 + 1);
    uStack_16c = *(uint *)((longlong)ppuVar5 + 0xc);
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_178);
  }
  else {
    ppuVar5 = (undefined8 **)*local_50;
    if (ppuVar5 != &local_128) goto LAB_140204bb6;
  }
  local_f8 = &local_128;
  uVar6 = CONCAT44(uVar3,DAT_141a049b8);
  ppuVar5 = (undefined8 **)FUN_140e634e0(param_1,param_2,&local_188,1,uVar6,&local_f8);
  uVar3 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (ppuVar5 != &local_148) {
    local_178 = *ppuVar5;
    uStack_170 = *(undefined4 *)(ppuVar5 + 1);
    uStack_16c = *(uint *)((longlong)ppuVar5 + 0xc);
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_178);
  }
  local_d0 = 0x17;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  ppuVar5 = (undefined8 **)(**(code **)(*DAT_141dddab8 + 8))(DAT_141dddab8,DAT_141a0a438);
  if (ppuVar5 != &local_128) {
    local_178 = *ppuVar5;
    uStack_170 = *(undefined4 *)(ppuVar5 + 1);
    uStack_16c = *(uint *)((longlong)ppuVar5 + 0xc);
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_178);
  }
  local_f8 = &local_128;
  if ((int)local_58[0] < 1) {
    ppuVar5 = (undefined8 **)&DAT_1419df7b0;
LAB_140204cf2:
    local_178 = *ppuVar5;
    uStack_170 = *(undefined4 *)(ppuVar5 + 1);
    uStack_16c = *(uint *)((longlong)ppuVar5 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_178);
  }
  else {
    ppuVar5 = (undefined8 **)*local_50;
    if (ppuVar5 != &local_118) goto LAB_140204cf2;
  }
  local_f0 = &local_118;
  uVar6 = CONCAT44(uVar3,DAT_1419ff4f8);
  ppuVar5 = (undefined8 **)FUN_140e634e0(param_1,param_2,&local_188,2,uVar6,&local_f8);
  uVar3 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (ppuVar5 != &local_158) {
    local_178 = *ppuVar5;
    uStack_170 = *(undefined4 *)(ppuVar5 + 1);
    uStack_16c = *(uint *)((longlong)ppuVar5 + 0xc);
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_178);
  }
  local_d0 = 0x18;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  local_f8 = &local_158;
  uVar15 = CONCAT44(uVar3,DAT_1419fdb88);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_188,1,uVar15,&local_f8);
  uVar3 = (undefined4)((ulonglong)uVar15 >> 0x20);
  cVar1 = FUN_140e491e0(uVar6);
  if (cVar1 == '\0') {
    local_d0 = 0x1b;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    local_f0 = &local_148;
    uVar6 = CONCAT44(uVar3,DAT_1419fd218);
    ppuVar5 = (undefined8 **)FUN_140e634e0(param_1,param_2,&local_c8,1,uVar6,&local_f0);
    uVar3 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (ppuVar5 != &local_158) {
      local_178 = *ppuVar5;
      uStack_170 = *(undefined4 *)(ppuVar5 + 1);
      uStack_16c = *(uint *)((longlong)ppuVar5 + 0xc);
      if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_178);
    }
    local_d0 = 0x1c;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    ppuVar5 = (undefined8 **)(**(code **)(*DAT_141dddab8 + 8))(DAT_141dddab8,DAT_141a0a438);
    if (ppuVar5 != &local_128) {
      local_178 = *ppuVar5;
      uStack_170 = *(undefined4 *)(ppuVar5 + 1);
      uStack_16c = *(uint *)((longlong)ppuVar5 + 0xc);
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_178);
    }
    local_f8 = &local_128;
    if ((int)local_58[0] < 1) {
      ppuVar5 = (undefined8 **)&DAT_1419df7b0;
LAB_140204f41:
      local_178 = *ppuVar5;
      uStack_170 = *(undefined4 *)(ppuVar5 + 1);
      uStack_16c = *(uint *)((longlong)ppuVar5 + 0xc);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_178);
    }
    else {
      ppuVar5 = (undefined8 **)*local_50;
      if (ppuVar5 != &local_118) goto LAB_140204f41;
    }
    local_f0 = &local_118;
    local_e8 = &local_158;
    uVar6 = CONCAT44(uVar3,DAT_1419ff3d8);
    FUN_140e634e0(param_1,param_2,&local_188,3,uVar6,&local_f8);
    uVar3 = (undefined4)((ulonglong)uVar6 >> 0x20);
    local_d0 = 0x1e;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    if ((int)local_58[0] < 1) {
      ppuVar5 = (undefined8 **)&DAT_1419df7b0;
LAB_140204ff5:
      local_178 = *ppuVar5;
      uStack_170 = *(undefined4 *)(ppuVar5 + 1);
      uStack_16c = *(uint *)((longlong)ppuVar5 + 0xc);
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_178);
    }
    else {
      ppuVar5 = (undefined8 **)*local_50;
      if (ppuVar5 != &local_128) goto LAB_140204ff5;
    }
    local_f8 = &local_128;
    pppuVar14 = &local_f8;
    uVar16 = CONCAT44(uVar3,DAT_141a08948);
    pdVar7 = (double *)FUN_140e634e0(param_1,param_2,&local_188,1,uVar16,pppuVar14);
    if (pdVar7 != &local_a8) {
      local_178 = (undefined8 *)*pdVar7;
      uStack_170 = *(undefined4 *)(pdVar7 + 1);
      uStack_16c = *(uint *)((longlong)pdVar7 + 0xc);
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      FUN_140041b80(&local_a8,&local_178);
    }
    local_d0 = 0x1f;
    uVar17 = (ulonglong)pppuVar14 & 0xffffffffffffff00;
    uVar16 = uVar16 & 0xffffffffffffff00;
    FUN_140e87440(&local_a8,DAT_141a089f8,0x80000000,&local_78,uVar16,uVar17);
    local_178 = local_78;
    uStack_170 = uStack_70;
    uStack_16c = uStack_6c;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_178);
    local_d0 = 0x21;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_15c = 0;
    local_168 = 0.0;
    local_d0 = 0x22;
    puVar9 = local_148;
    if ((local_13c & 0xffffff) != 0) {
      puVar9 = (undefined8 *)FUN_140e4b060(&local_148);
    }
    uVar13 = (ulonglong)(double)puVar9;
    uVar12 = (uint)uVar13;
    while (0 < (int)uVar12) {
      uVar12 = (int)uVar13 - 1;
      uVar13 = (ulonglong)uVar12;
      local_d0 = 0x24;
      iVar2 = FUN_140e4a740(&local_168);
      if (((local_ac & 0xffffff) == 2) && (local_b8 != 0)) {
        if ((iVar2 < 0) || (*(int *)(local_b8 + 0x24) <= iVar2)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar2,
                        *(undefined4 *)(local_b8 + 0x24));
          plVar8 = (longlong *)0x0;
        }
        else {
          plVar8 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(local_b8 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        plVar8 = &local_b8;
      }
      uVar17 = uVar17 & 0xffffffffffffff00;
      uVar16 = uVar16 & 0xffffffffffffff00;
      FUN_140e87440(plVar8,DAT_141a08768,0x80000000,&local_98,uVar16,uVar17);
      uVar3 = FUN_140e4a740(&local_168);
      ppuVar5 = (undefined8 **)FUN_140e48e40(&local_158,uVar3);
      FUN_140e609c0(*local_158);
      if (&local_98 != ppuVar5) {
        local_178 = local_98;
        uStack_170 = uStack_90;
        uStack_16c = uStack_8c;
        if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(ppuVar5);
        }
        FUN_140041b80(ppuVar5,&local_178);
      }
      FUN_140e60910(1);
      local_d0 = 0x25;
      uVar4 = local_15c & 0xffffff;
      if (uVar4 == 0) {
LAB_140205290:
        local_168 = local_168 + 1.0;
      }
      else if (uVar4 == 1) {
        local_168 = (double)FUN_140e4b060(&local_168);
        local_168 = local_168 + 1.0;
        local_15c = 0;
      }
      else if (uVar4 == 7) {
        local_168 = (double)CONCAT44(local_168._4_4_,local_168._0_4_ + 1);
      }
      else if (uVar4 == 10) {
        local_168 = (double)((longlong)local_168 + 1);
      }
      else {
        if (uVar4 == 0xd) {
          local_15c = 0;
          goto LAB_140205290;
        }
        FUN_140042910(&DAT_14172c3d8,&local_168,&local_168);
      }
    }
    uVar3 = (undefined4)(uVar16 >> 0x20);
  }
  local_d0 = 0x2b;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  if ((int)local_58[0] < 2) {
    pdVar7 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar7 = (double *)local_50[1];
  }
  uStack_12c = *(undefined4 *)((longlong)pdVar7 + 0xc);
  uStack_130 = *(undefined4 *)(pdVar7 + 1);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) == 0) {
    local_138 = (undefined8 *)*pdVar7;
  }
  else {
    FUN_1400419b0(&local_138);
  }
  FUN_140046500(&local_138,&local_148);
  local_178 = local_138;
  uStack_170 = uStack_130;
  uStack_16c = uStack_12c;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_178);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_f8 = &local_128;
  uVar6 = FUN_140e634e0(param_1,param_2,&local_188,1,CONCAT44(uVar3,DAT_1419fe728),&local_f8);
  uStack_16c = local_13c;
  uStack_170 = local_140;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) == 0) {
    local_178 = local_148;
  }
  else {
    FUN_1400419b0(&local_178,&local_148);
  }
  FUN_140042560(&local_178,uVar6);
  if ((int)local_58[0] < 2) {
    pdVar7 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar7 = (double *)local_50[1];
  }
  uStack_12c = *(undefined4 *)((longlong)pdVar7 + 0xc);
  uStack_130 = *(undefined4 *)(pdVar7 + 1);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) == 0) {
    local_138 = (undefined8 *)*pdVar7;
  }
  else {
    FUN_1400419b0(&local_138);
  }
  FUN_1400462a0(&local_138,&local_178);
  if ((int)local_58[0] < 2) {
    puVar9 = &DAT_1419df7b0;
LAB_1402054a4:
    local_68 = (undefined4)local_138;
    uStack_64 = local_138._4_4_;
    uStack_60 = uStack_130;
    uStack_5c = uStack_12c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    FUN_140041b80(puVar9,&local_68);
  }
  else {
    puVar9 = (undefined8 *)local_50[1];
    if (&local_138 != puVar9) goto LAB_1402054a4;
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_d0 = 0x2d;
  if (1 < (int)local_58[0]) {
    puVar10 = (undefined8 *)local_50[1];
  }
  iVar2 = FUN_140e4a740(puVar10);
  ppuVar5 = (undefined8 **)0x0;
  if (((uStack_14c & 0xffffff) == 2) && (local_158 != (undefined8 *)0x0)) {
    if ((iVar2 < 0) || (*(int *)((longlong)local_158 + 0x24) <= iVar2)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar2,
                    *(undefined4 *)((longlong)local_158 + 0x24));
    }
    else {
      ppuVar5 = (undefined8 **)((longlong)iVar2 * 0x10 + local_158[1]);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
    ppuVar5 = &local_158;
  }
  if (ppuVar5 != param_3) {
    local_68 = *(undefined4 *)ppuVar5;
    uStack_64 = *(undefined4 *)((longlong)ppuVar5 + 4);
    uStack_60 = *(undefined4 *)(ppuVar5 + 1);
    uStack_5c = *(undefined4 *)((longlong)ppuVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_68);
  }
LAB_1402055bb:
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(&local_128,0x10,3,FUN_140041b30);
  if (0 < (int)local_58[0]) {
    puVar10 = local_50;
    do {
      puVar9 = (undefined8 *)*puVar10;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar9);
      }
      *puVar9 = 0;
      *(undefined4 *)(puVar9 + 1) = 0;
      *(undefined4 *)((longlong)puVar9 + 0xc) = 5;
      puVar10 = puVar10 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  FUN_140e4cd60(local_50);
  DAT_141dc7a50 = (undefined8 *)local_e0;
  return param_3;
}

