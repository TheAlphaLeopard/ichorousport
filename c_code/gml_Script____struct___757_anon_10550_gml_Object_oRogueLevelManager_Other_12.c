// gml_Script____struct___757_anon_10550_gml_Object_oRogueLevelManager_Other_12 @ 0x140d0a240

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
gml_Script____struct___757_anon_10550_gml_Object_oRogueLevelManager_Other_12
          (undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 **ppuVar5;
  int iVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  longlong local_178;
  longlong lStack_170;
  longlong local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  longlong local_138;
  byte local_12c;
  longlong local_128;
  byte local_11c;
  longlong local_118;
  byte local_10c;
  longlong local_108;
  byte local_fc;
  double local_f8;
  undefined4 local_ec;
  longlong local_e8;
  undefined4 local_dc;
  longlong local_d8;
  undefined4 local_cc;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  double *local_a8;
  longlong local_98;
  undefined4 uStack_90;
  int iStack_8c;
  longlong local_88;
  undefined4 uStack_80;
  int iStack_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_34;
  
  local_70 = "gml_Script_anon@10074@gml_Object_oRogueLevelManager_Other_12";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0x166;
  uVar9 = 1;
  _eh_vector_constructor_iterator_(&local_138,0x10,5,FUN_1400424d0,FUN_140041b30);
  plVar2 = (longlong *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419fa788);
  local_cc = 0xffffff;
  local_d8 = 0;
  iStack_7c = 0xffffff;
  local_88 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  iStack_8c = 0xffffff;
  local_98 = 0;
  plVar3 = (longlong *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419fa7a8);
  local_54 = 0;
  local_60 = 0;
  local_14c = 0;
  local_158 = 0;
  local_34 = 0;
  local_40 = 0;
  local_44 = 0;
  local_50 = 0;
  local_13c = 0;
  local_148 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 0x167;
  uStack_15c = 0xf;
  local_168 = 0x100000000000014;
  lStack_170 = CONCAT44(0xf,uStack_160);
  local_178 = 0x100000000000014;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_178);
  local_c8 = &local_138;
  ppuVar5 = &local_c8;
  uVar8 = CONCAT44(uVar9,DAT_141a02ef8);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_60,1,uVar8,ppuVar5);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_68 = 0x167;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    uVar9 = (undefined4)(uVar8 >> 0x20);
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    FUN_140e609c0(DAT_141a729d8);
    FUN_140e645a0(&local_168,gml_Script_anon_10074_gml_Object_oRogueLevelManager_Other_12,0);
    if (&local_168 != plVar2) {
      lStack_170 = CONCAT44(uStack_15c,uStack_160);
      local_178 = local_168;
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar2);
      }
      FUN_140041b80(plVar2,&local_178);
    }
    FUN_140e60910(1);
    if (plVar2 != &local_128) {
      local_178 = *plVar2;
      lStack_170 = plVar2[1];
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_178);
    }
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_c0 = &local_128;
    plVar2 = (longlong *)FUN_140e8da20(&local_40,param_1,0);
    if (plVar2 != &local_118) {
      local_178 = *plVar2;
      lStack_170 = plVar2[1];
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_178);
    }
    local_b8 = &local_118;
    plVar2 = (longlong *)FUN_140e8da20(&local_50,param_1,0);
    if (plVar2 != &local_108) {
      local_178 = *plVar2;
      lStack_170 = plVar2[1];
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_178);
    }
    local_b0 = &local_108;
    ppuVar5 = &local_c0;
    puVar7 = &local_158;
  }
  else {
    local_68 = 0x168;
    plVar2 = (longlong *)FUN_140e8da20(&local_60,param_1,0);
    if (plVar2 != &local_d8) {
      local_178 = *plVar2;
      lStack_170 = plVar2[1];
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      FUN_140041b80(&local_d8,&local_178);
    }
    local_68 = 0x169;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    uStack_15c = 0xf;
    local_168 = 0x100000000000014;
    uVar8 = uVar8 & 0xffffffffffffff00;
    FUN_140e87440(&local_168,DAT_141a03ad8,0x80000000,&local_88,uVar8,
                  (ulonglong)ppuVar5 & 0xffffffffffffff00);
    uVar9 = (undefined4)(uVar8 >> 0x20);
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_c8 = &local_d8;
    local_178 = _DAT_141dc75c0;
    lStack_170 = lRam0000000141dc75c8;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_178);
    local_c0 = &local_128;
    lStack_170 = CONCAT44(iStack_7c,uStack_80);
    local_178 = local_88;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_178);
    local_b8 = &local_118;
    local_178 = _DAT_141dc75c0;
    lStack_170 = lRam0000000141dc75c8;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_178);
    local_b0 = &local_108;
    iVar6 = 0;
    if ((iStack_7c == 2) && (local_88 != 0)) {
      iVar6 = *(int *)(local_88 + 0x24);
    }
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_ec = 0;
    local_f8 = (double)iVar6;
    local_a8 = &local_f8;
    ppuVar5 = &local_c8;
    uVar8 = CONCAT44(uVar9,DAT_1419fd348);
    FUN_140e634e0(param_1,param_2,&local_158,5,uVar8,ppuVar5);
    local_68 = 0x16a;
    plVar2 = (longlong *)FUN_140e8da20(&local_158,param_1,0);
    if (plVar2 != &local_e8) {
      local_178 = *plVar2;
      lStack_170 = plVar2[1];
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_178);
    }
    local_68 = 0x16b;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    uStack_15c = 0xf;
    local_168 = 0x100000000000014;
    uVar8 = uVar8 & 0xffffffffffffff00;
    FUN_140e87440(&local_168,DAT_1419f5bb8,0x80000000,&local_98,uVar8,
                  (ulonglong)ppuVar5 & 0xffffffffffffff00);
    uVar9 = (undefined4)(uVar8 >> 0x20);
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_c8 = &local_e8;
    local_178 = _DAT_141dc75c0;
    lStack_170 = lRam0000000141dc75c8;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_178);
    local_c0 = &local_128;
    lStack_170 = CONCAT44(iStack_8c,uStack_90);
    local_178 = local_98;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_178);
    local_b8 = &local_118;
    local_178 = _DAT_141dc75c0;
    lStack_170 = lRam0000000141dc75c8;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_178);
    local_b0 = &local_108;
    iVar6 = 0;
    if ((iStack_8c == 2) && (local_98 != 0)) {
      iVar6 = *(int *)(local_98 + 0x24);
    }
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_ec = 0;
    local_f8 = (double)iVar6;
    local_a8 = &local_f8;
    uVar4 = CONCAT44(uVar9,DAT_1419fd348);
    FUN_140e634e0(param_1,param_2,&local_148,5,uVar4,&local_c8);
    uVar9 = (undefined4)((ulonglong)uVar4 >> 0x20);
    local_68 = 0x16c;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    FUN_140e609c0(DAT_141a729d8);
    FUN_140e645a0(&local_168,gml_Script_anon_10489_gml_Object_oRogueLevelManager_Other_12,0);
    if (&local_168 != plVar3) {
      lStack_170 = CONCAT44(uStack_15c,uStack_160);
      local_178 = local_168;
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar3);
      }
      FUN_140041b80(plVar3,&local_178);
    }
    FUN_140e60910(1);
    if (plVar3 != &local_138) {
      local_178 = *plVar3;
      lStack_170 = plVar3[1];
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_178);
    }
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_c8 = &local_138;
    local_c0 = &local_d8;
    local_b8 = &local_e8;
    ppuVar5 = &local_c8;
    puVar7 = &local_148;
  }
  plVar2 = (longlong *)FUN_140e634e0(param_1,param_2,puVar7,3,CONCAT44(uVar9,DAT_1419fd6d8),ppuVar5)
  ;
  if (plVar2 != param_3) {
    local_178 = *plVar2;
    lStack_170 = plVar2[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_178);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_50);
  }
  if ((1 << ((byte)local_34 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_40);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  if ((1 << ((byte)iStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)iStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(&local_138,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

