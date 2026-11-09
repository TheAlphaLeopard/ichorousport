// gml_Script_rolled_list_add @ 0x1405e0740

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_rolled_list_add
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  bool bVar1;
  char cVar2;
  int iVar3;
  double *pdVar4;
  undefined8 uVar5;
  double *pdVar6;
  undefined8 *puVar7;
  double *pdVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  code *pcVar12;
  double **ppdVar13;
  ulonglong uVar14;
  undefined4 uVar16;
  undefined1 **ppuVar15;
  ulonglong in_stack_fffffffffffffde0;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 local_20c;
  undefined8 *local_208;
  undefined8 uStack_200;
  double local_1f8;
  uint local_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined8 *local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 *local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  char *local_1b0;
  undefined4 local_1a8;
  double local_1a0;
  int local_194;
  undefined8 *local_188;
  char *pcStack_180;
  undefined4 local_178;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  double local_158;
  byte local_14c;
  double local_148;
  byte local_13c;
  double local_138 [2];
  undefined8 local_128 [2];
  undefined1 local_118 [16];
  undefined8 local_108 [2];
  undefined1 local_f8 [16];
  double local_e8;
  undefined4 local_dc;
  double *local_d8;
  double *local_d0;
  double *local_c8;
  double *local_c0;
  undefined8 *local_b8;
  undefined1 *local_b0;
  undefined8 *local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  
  local_1b0 = "gml_Script_add_trinket";
  local_1b8 = DAT_141dc7a50;
  DAT_141dc7a50 = (undefined8 **)&local_1b8;
  local_1a8 = 0x3a;
  pcVar12 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_158,0x10,7,FUN_1400424d0,FUN_140041b30);
  local_5c = 0xffffff;
  local_68 = 0;
  local_dc = 0xffffff;
  local_e8 = 0.0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_d8 = (double *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1ef20);
  uStack_7c = 0xffffff;
  local_88 = (undefined8 *)0x0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_194 = 0xffffff;
  local_1a0 = 0.0;
  pdVar4 = (double *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a572b0);
  local_1ec = 0xffffff;
  local_1f8 = 0.0;
  local_20c = 0;
  uVar10 = 0;
  uVar11 = 0;
  local_218 = 0;
  local_1dc = 0;
  local_1e8 = 0;
  local_15c = 0;
  local_168 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1a8 = 0x3c;
  pdVar8 = (double *)&DAT_1419df7b0;
  if (param_4 < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*param_5;
  }
  in_stack_fffffffffffffde0 = in_stack_fffffffffffffde0 & 0xffffffffffffff00;
  FUN_140e87440(puVar7,DAT_141a0a8a8,0x80000000,&local_68,(ulonglong)pcVar12 & 0xffffffffffffff00,
                in_stack_fffffffffffffde0);
  uStack_1bc = DAT_141dd4da4;
  uStack_1c0 = DAT_141dd4da0;
  if ((1 << ((byte)DAT_141dd4da4 & 0x1f) & 0x46U) == 0) {
    local_1c8 = DAT_141dd4d98;
  }
  else {
    FUN_1400419b0(&local_1c8,&DAT_141dd4d98);
  }
  uVar9 = 1 << ((byte)uStack_1bc & 0x1f) & 0x46;
  uStack_1d0 = uStack_1c0;
  uStack_1cc = uStack_1bc;
  if (uVar9 == 0) {
    local_1d8 = local_1c8;
  }
  else {
    FUN_1400419b0(&local_1d8,&local_1c8);
  }
  FUN_1400460e0(&local_1d8,&local_68);
  uStack_200 = (double)CONCAT44(uStack_1cc,uStack_1d0);
  local_208 = local_1d8;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140041b80(&local_e8);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if (uVar9 != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1a8 = 0x3d;
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_218 = 0;
  local_210 = 0;
  local_20c = 5;
  local_d0 = &local_e8;
  local_208 = _DAT_1419df7a0;
  uStack_200 = (double)uRam00000001419df7a8;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  FUN_140041b80(&local_148,&local_208);
  ppdVar13 = &local_d0;
  local_c8 = &local_148;
  uVar5 = gml_Script____struct___106(param_1,param_2,&local_218,2,ppdVar13);
  cVar2 = FUN_140e491e0(uVar5);
  if (cVar2 == '\0') {
    local_1a8 = 0x3e;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1e8 = 0;
    local_1e0 = 0;
    local_1dc = 5;
    local_c0 = &local_e8;
    local_208 = _DAT_1419df7c0;
    uStack_200 = (double)uRam00000001419df7c8;
    if ((1 << ((byte)local_128[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_208);
    local_b8 = local_128;
    pcStack_180 = "gml_Script_savedata_set";
    local_188 = DAT_141dc7a50;
    DAT_141dc7a50 = &local_188;
    local_178 = 8;
    uVar5 = (**(code **)(*DAT_141a729d8 + 8))();
    local_1dc = 5;
    local_1e8 = 0;
    local_178 = 10;
    FUN_140e98ef0(param_1,param_2,uVar5,local_c0,local_b8);
    DAT_141dc7a50 = (undefined8 **)local_188;
    local_1a8 = 0x3f;
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_218 = 0;
    local_210 = 0;
    local_20c = 5;
    gml_Script_settings_save(param_1,param_2,&local_218,0,0);
    local_1a8 = 0x40;
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_218 = 0;
    local_210 = 0;
    local_20c = 5;
    ppdVar13 = (double **)0x0;
    gml_Script_add_trinket(param_1,param_2,&local_218,0,0);
  }
  local_1a8 = 0x43;
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_218 = 0;
  local_210 = 0;
  local_20c = 5;
  if (param_4 < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*param_5;
  }
  in_stack_fffffffffffffde0 = in_stack_fffffffffffffde0 & 0xffffffffffffff00;
  uVar14 = (ulonglong)ppdVar13 & 0xffffffffffffff00;
  FUN_140e87440(puVar7,DAT_1419f5858,0x80000000,&local_78,uVar14,in_stack_fffffffffffffde0);
  FUN_140e87440(local_d8,DAT_141a1f3f0,0x80000000,&local_88,uVar14 & 0xffffffffffffff00,
                in_stack_fffffffffffffde0 & 0xffffffffffffff00);
  uStack_200 = (double)CONCAT44(uStack_7c,uStack_80);
  local_208 = local_88;
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_140041b80(&local_158,&local_208);
  local_d0 = &local_158;
  if (param_4 < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*param_5;
  }
  uVar5 = FUN_140069500(puVar7);
  ppdVar13 = &local_d0;
  puVar7 = &local_78;
  FUN_140e63610(uVar5,param_2,&local_218,1,puVar7,ppdVar13);
  local_1a8 = 0x44;
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_218 = 0;
  local_210 = 0;
  local_20c = 5;
  if (param_4 < 1) {
    FUN_140e87440(&DAT_1419df7b0,DAT_1419f5d08,0x80000000,&local_98,
                  (ulonglong)puVar7 & 0xffffffffffffff00,(ulonglong)ppdVar13 & 0xffffffffffffff00);
    puVar7 = &DAT_1419df7b0;
  }
  else {
    FUN_140e87440(*param_5,DAT_1419f5d08,0x80000000,&local_98,(ulonglong)puVar7 & 0xffffffffffffff00
                  ,(ulonglong)ppdVar13 & 0xffffffffffffff00);
    puVar7 = (undefined8 *)*param_5;
  }
  uVar5 = FUN_140069500(puVar7);
  puVar7 = &local_98;
  FUN_140e63610(uVar5,param_2,&local_218,0,puVar7,0);
  uVar16 = (undefined4)((ulonglong)puVar7 >> 0x20);
  local_1a8 = 0x45;
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_218 = 0;
  local_210 = 0;
  local_20c = 5;
  if (local_d8 != &local_158) {
    local_208 = (undefined8 *)*local_d8;
    uStack_200 = local_d8[1];
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_208);
  }
  local_d0 = &local_158;
  uVar5 = CONCAT44(uVar16,DAT_141a0aa48);
  pdVar6 = (double *)FUN_140e634e0(param_1,param_2,&local_218,1,uVar5,&local_d0);
  uVar16 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (pdVar6 != &local_1a0) {
    local_208 = (undefined8 *)*pdVar6;
    uStack_200 = pdVar6[1];
    if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a0);
    }
    FUN_140041b80(&local_1a0,&local_208);
  }
  local_1a8 = 0x47;
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_218 = 0;
  local_210 = 0;
  local_20c = 5;
  if (pdVar4 != &local_158) {
    local_208 = (undefined8 *)*pdVar4;
    uStack_200 = pdVar4[1];
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_208);
  }
  local_d0 = &local_158;
  if ((param_4 < 1) || (pdVar8 = (double *)*param_5, pdVar8 != &local_148)) {
    local_208 = (undefined8 *)*pdVar8;
    uStack_200 = pdVar8[1];
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_208);
  }
  uVar5 = CONCAT44(uVar16,DAT_141a57350);
  local_c8 = &local_148;
  FUN_140e634e0(param_1,param_2,&local_218,2,uVar5,&local_d0);
  uVar16 = (undefined4)((ulonglong)uVar5 >> 0x20);
  local_1a8 = 0x48;
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_218 = 0;
  local_210 = 0;
  local_20c = 5;
  uStack_1cc = 0xf;
  local_1d8 = (undefined8 *)0x1000002000001b1;
  uStack_200 = (double)CONCAT44(0xf,uStack_1d0);
  local_208 = (undefined8 *)0x1000002000001b1;
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_140041b80(&local_158,&local_208);
  local_d0 = &local_158;
  local_208 = _DAT_1419e69e0;
  uStack_200 = (double)uRam00000001419e69e8;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  FUN_140041b80(&local_148,&local_208);
  local_208 = _DAT_1419df7a0;
  uStack_200 = (double)uRam00000001419df7a8;
  local_c8 = &local_148;
  if ((1 << ((byte)local_138[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_208);
  local_c0 = local_138;
  ppuVar15 = (undefined1 **)CONCAT44(uVar16,DAT_141a0a2e8);
  FUN_140e634e0(param_1,param_2,&local_218,3,ppuVar15,&local_d0);
  local_1a8 = 0x49;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1ec = 0;
  local_1f8 = 0.0;
  bVar1 = true;
  do {
    uVar16 = (undefined4)((ulonglong)ppuVar15 >> 0x20);
    if (!bVar1) {
      local_1a8 = 0x49;
      uVar9 = local_1ec & 0xffffff;
      if (uVar9 == 0) {
LAB_1405e10ed:
        local_1f8 = (double)CONCAT44(uVar11,uVar10) + 1.0;
      }
      else if (uVar9 == 1) {
        local_1f8 = (double)FUN_140e4b060(&local_1f8);
        local_1f8 = local_1f8 + 1.0;
        local_1ec = 0;
      }
      else if (uVar9 == 7) {
        local_1f8 = (double)CONCAT44(local_1f8._4_4_,local_1f8._0_4_ + 1);
      }
      else if (uVar9 == 10) {
        local_1f8 = (double)((longlong)local_1f8 + 1);
      }
      else {
        if (uVar9 == 0xd) {
          local_1ec = 0;
          goto LAB_1405e10ed;
        }
        FUN_140042910(&DAT_14172c3d8,&local_1f8,&local_1f8);
      }
    }
    bVar1 = false;
    iVar3 = 0;
    if ((local_194 == 2) && (local_1a0 != 0.0)) {
      iVar3 = *(int *)((longlong)local_1a0 + 0x24);
    }
    uStack_1cc = 0;
    local_1d8 = (undefined8 *)(double)iVar3;
    iVar3 = FUN_140e851f0(&local_1f8,&local_1d8,DAT_141955260,1);
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    if (iVar3 == -2 || -1 < iVar3) {
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a0);
      }
      if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_68);
      }
      _eh_vector_destructor_iterator_(&local_158,0x10,7,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 **)local_1b8;
      return param_3;
    }
    local_1a8 = 0x4b;
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_218 = 0;
    local_210 = 0;
    local_20c = 5;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1e8 = 0;
    local_1e0 = 0;
    local_1dc = 5;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    local_d0 = &local_1a0;
    local_c8 = &local_1f8;
    if (local_d8 != local_138) {
      local_188 = (undefined8 *)*local_d8;
      pcStack_180 = (char *)local_d8[1];
      if ((1 << ((byte)local_138[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_138);
      }
      FUN_140041b80(local_138,&local_188);
    }
    local_c0 = local_138;
    uVar5 = CONCAT44(uVar16,DAT_141a03ca8);
    puVar7 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_168,2,uVar5,&local_d0);
    uVar10 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (puVar7 != local_128) {
      local_188 = (undefined8 *)*puVar7;
      pcStack_180 = (char *)puVar7[1];
      if ((1 << ((byte)local_128[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_128);
      }
      FUN_140041b80(local_128,&local_188);
    }
    local_b8 = local_128;
    uStack_200 = (double)CONCAT44(0xf,(undefined4)uStack_200);
    local_208 = (undefined8 *)0x1000000000000d0;
    local_188 = (undefined8 *)0x1000000000000d0;
    pcStack_180 = (char *)uStack_200;
    if ((1 << (local_118[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_188);
    local_b0 = local_118;
    puVar7 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_1e8,2,CONCAT44(uVar10,DAT_141a01138),&local_c0);
    if (puVar7 != local_108) {
      local_188 = (undefined8 *)*puVar7;
      pcStack_180 = (char *)puVar7[1];
      if ((1 << ((byte)local_108[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_188);
    }
    local_a8 = local_108;
    FUN_140e645a0(&local_1c8,gml_Script_rolled_list,param_1);
    pcStack_180 = (char *)CONCAT44(uStack_1bc,uStack_1c0);
    local_188 = local_1c8;
    if ((1 << (local_f8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_188);
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_a0 = local_f8;
    ppuVar15 = &local_b0;
    gml_Script_SignalRemove(param_1,param_2,&local_218,3,ppuVar15);
    uVar10 = SUB84(local_1f8,0);
    uVar11 = (undefined4)((ulonglong)local_1f8 >> 0x20);
  } while( true );
}

