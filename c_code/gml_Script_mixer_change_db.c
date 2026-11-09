// gml_Script_mixer_change_db @ 0x14049f8d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * gml_Script_mixer_change_db(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  double *pdVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  longlong lVar13;
  undefined4 uVar14;
  double dVar15;
  undefined4 uVar16;
  longlong local_188;
  undefined4 uStack_180;
  int iStack_17c;
  longlong local_178;
  undefined4 uStack_170;
  int iStack_16c;
  longlong local_168;
  longlong lStack_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  longlong local_148;
  undefined4 local_140;
  int local_13c;
  undefined8 local_138;
  char *local_130;
  undefined4 local_128;
  double local_120;
  undefined4 local_114;
  uint local_110;
  longlong local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_dc;
  longlong local_d8;
  undefined4 local_cc;
  longlong local_c8;
  uint uStack_bc;
  longlong *local_b8;
  undefined8 *local_b0;
  undefined1 *local_a8;
  longlong *local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  longlong local_68;
  byte local_5c;
  
  local_130 = "gml_Script_anon@281@SoundBank@SFX_FUNCS";
  local_138 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_138;
  local_128 = 0x10;
  uVar16 = 1;
  _eh_vector_constructor_iterator_(local_98,0x10,4,FUN_1400424d0,FUN_140041b30);
  uVar7 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57b20);
  uVar12 = 0xffffff;
  local_110 = 0xffffff;
  uStack_bc = 0xffffff;
  local_c8 = 0;
  local_114 = 0xffffff;
  local_120 = 0.0;
  iStack_16c = 0xffffff;
  local_178 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  uStack_fc = 0xffffff;
  local_108 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_14c = 0;
  local_158 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_128 = 0x12;
  cVar5 = FUN_140e491e0(uVar7);
  if (cVar5 == '\0') {
    local_128 = 0x14;
    plVar8 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fa0e8);
    lVar13 = 0;
    if (plVar8 != &local_c8) {
      local_f8 = *plVar8;
      uStack_f0 = plVar8[1];
      FUN_140041b80(&local_c8,&local_f8);
      local_110 = uStack_bc;
      lVar13 = local_c8;
      uVar12 = uStack_bc;
    }
    local_128 = 0x15;
    iVar6 = 0;
    if ((uVar12 == 2) && (lVar13 != 0)) {
      iVar6 = *(int *)(lVar13 + 0x24);
    }
    if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_120);
    }
    local_114 = 0;
    local_120 = (double)iVar6;
    local_128 = 0x16;
    iStack_17c = 0;
    local_188 = 0;
    iVar6 = FUN_140e851f0(&local_120,&local_188,DAT_141955260,1);
    if ((1 << ((byte)iStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    if (iVar6 == -2 || 0 < iVar6) {
      local_128 = 0x18;
      iStack_17c = 0;
      local_188 = 0x3ff0000000000000;
      iVar6 = FUN_140e851f0(&local_120,&local_188,DAT_141955260,1);
      if ((1 << ((byte)iStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      if (iVar6 < 1) {
        iStack_17c = 0;
        local_188 = 0;
        plVar8 = &local_188;
        bVar3 = false;
        bVar2 = false;
        bVar1 = true;
      }
      else {
        pdVar9 = (double *)FUN_140053940(&local_f8,&local_120,1);
        if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
          dVar15 = *pdVar9;
        }
        else {
          dVar15 = (double)FUN_140e4b060(pdVar9);
        }
        local_148 = FUN_140e78f00((longlong)dVar15);
        local_13c = 0;
        plVar8 = &local_148;
        bVar3 = true;
        bVar2 = true;
        bVar1 = false;
      }
      iVar4 = local_13c;
      iVar6 = iStack_17c;
      local_168 = *plVar8;
      lStack_160 = plVar8[1];
      if ((1 << ((byte)iStack_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      FUN_140041b80(&local_178,&local_168);
      if ((bVar1) && ((1 << ((byte)iVar6 & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_188);
      }
      if ((bVar2) && ((1 << ((byte)iVar4 & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_148);
      }
      if ((bVar3) && ((1 << ((byte)((ulonglong)uStack_f0 >> 0x20) & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_f8);
      }
      local_128 = 0x19;
      uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fa018);
      iVar6 = FUN_140e851f0(&local_178,uVar7,DAT_141955260,0);
      if (iVar6 == 0) {
        local_188 = 0x3ff0000000000000;
        iStack_17c = iVar6;
        iVar6 = FUN_140e851f0(&local_120,&local_188,DAT_141955260,1);
        if ((1 << ((byte)iStack_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        if (0 < iVar6) {
          local_128 = 0x1a;
          local_13c = iStack_16c;
          local_140 = uStack_170;
          if ((1 << ((byte)iStack_16c & 0x1f) & 0x46U) == 0) {
            local_148 = local_178;
          }
          else {
            FUN_1400419b0(&local_148,&local_178);
          }
          uStack_f0 = CONCAT44(7,(undefined4)uStack_f0);
          local_f8 = CONCAT44(local_f8._4_4_,1);
          FUN_1400460e0(&local_148,&local_f8);
          if ((1 << ((byte)((ulonglong)uStack_f0 >> 0x20) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_f8);
          }
          iStack_17c = local_13c;
          uStack_180 = local_140;
          if ((1 << ((byte)local_13c & 0x1f) & 0x46U) == 0) {
            local_188 = local_148;
          }
          else {
            FUN_1400419b0(&local_188,&local_148);
          }
          FUN_140046880(&local_188,&local_120);
          lStack_160 = CONCAT44(iStack_17c,uStack_180);
          local_168 = local_188;
          if ((1 << ((byte)iStack_16c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_178);
          }
          FUN_140041b80(&local_178,&local_168);
          if ((1 << ((byte)iStack_17c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_188);
          }
          if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_148);
          }
        }
      }
      local_128 = 0x1d;
      plVar8 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fa018);
      FUN_140e609c0(param_1);
      if (&local_178 != plVar8) {
        lStack_160 = CONCAT44(iStack_16c,uStack_170);
        local_168 = local_178;
        if ((1 << ((byte)*(undefined4 *)((longlong)plVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(plVar8);
        }
        FUN_140041b80(plVar8,&local_168);
      }
      FUN_140e60910(1);
      local_128 = 0x1f;
      iVar6 = FUN_140e4a740(&local_178);
      uVar12 = local_110;
      plVar8 = (longlong *)0x0;
      if (((local_110 & 0xffffff) == 2) && (lVar13 != 0)) {
        if ((iVar6 < 0) || (*(int *)(lVar13 + 0x24) <= iVar6)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar6,
                        *(undefined4 *)(lVar13 + 0x24));
        }
        else {
          plVar8 = (longlong *)((longlong)iVar6 * 0x10 + *(longlong *)(lVar13 + 8));
        }
        if (plVar8 != &local_d8) goto LAB_14049fefd;
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        plVar8 = &local_c8;
LAB_14049fefd:
        local_168 = *plVar8;
        lStack_160 = plVar8[1];
        if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d8);
        }
        FUN_140041b80(&local_d8,&local_168);
      }
      local_128 = 0x20;
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      local_158 = 0;
      local_150 = 0;
      local_14c = 5;
      plVar8 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fa088);
      local_b8 = &local_d8;
      local_168 = _DAT_1419e5f60;
      lStack_160 = uRam00000001419e5f68;
      if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_88);
      }
      FUN_140041b80(local_88,&local_168);
      local_b0 = (undefined8 *)local_88;
      local_168 = _DAT_1419df7a0;
      lStack_160 = lRam00000001419df7a8;
      if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_78);
      }
      FUN_140041b80(local_78,&local_168);
      local_a8 = local_78;
      if (plVar8 != &local_68) {
        local_168 = *plVar8;
        lStack_160 = plVar8[1];
        if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_68);
        }
        FUN_140041b80(&local_68,&local_168);
      }
      local_a0 = &local_68;
      uVar7 = CONCAT44(uVar16,DAT_141a0a2e8);
      plVar8 = (longlong *)FUN_140e634e0(param_1,param_2,&local_158,4,uVar7,&local_b8);
      uVar16 = (undefined4)((ulonglong)uVar7 >> 0x20);
      if (plVar8 != &local_108) {
        local_168 = *plVar8;
        lStack_160 = plVar8[1];
        if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        FUN_140041b80(&local_108,&local_168);
      }
      local_128 = 0x22;
      puVar10 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fa068);
      puVar11 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fa028);
      if ((*(uint *)((longlong)puVar11 + 0xc) & 0xffffff) == 0) {
        uVar14 = (undefined4)*puVar11;
      }
      else {
        uVar14 = FUN_140e4b060(puVar11);
      }
      if ((*(uint *)((longlong)puVar10 + 0xc) & 0xffffff) == 0) {
        uVar7 = *puVar10;
      }
      else {
        uVar7 = FUN_140e4b060(puVar10);
      }
      uVar7 = FUN_140e794b0(uVar7,uVar14);
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      local_dc = 0;
      local_128 = 0x23;
      local_e8 = uVar7;
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      local_158 = 0;
      local_150 = 0;
      local_14c = 5;
      local_b8 = &local_108;
      local_b0 = &local_e8;
      FUN_140e634e0(param_1,param_2,&local_158,2,CONCAT44(uVar16,DAT_1419fa008),&local_b8);
      local_128 = 0x25;
      if (&local_108 != param_3) {
        lStack_160 = CONCAT44(uStack_fc,uStack_100);
        local_168 = local_108;
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        FUN_140041b80(param_3,&local_168);
      }
      goto LAB_1404a01c2;
    }
    local_128 = 0x16;
  }
  else {
    local_128 = 0x12;
  }
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0;
  *param_3 = (longlong)&DAT_bff0000000000000;
LAB_1404a01c2:
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)iStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)uVar12 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(local_98,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_138;
  return param_3;
}

