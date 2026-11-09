// gml_Script____struct___713_anon_980_anon_382_gml_Object_oProjectile_Create_0 @ 0x140c9ed80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script____struct___713_anon_980_anon_382_gml_Object_oProjectile_Create_0
               (longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  double *pdVar4;
  double dVar5;
  undefined4 uVar8;
  undefined8 uVar6;
  ulonglong uVar7;
  double **ppdVar9;
  ulonglong uVar10;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  double local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  char *local_140;
  undefined4 local_138;
  double local_130;
  undefined4 local_128;
  undefined4 local_124;
  double *local_120;
  double *local_118;
  undefined8 *local_110;
  undefined1 *local_108;
  double local_f8;
  byte local_ec;
  undefined8 local_e8;
  byte local_dc;
  undefined8 local_d8;
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  double local_b8;
  uint local_ac;
  double local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  double local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  double local_68;
  undefined4 local_60;
  undefined4 local_5c;
  double local_58;
  undefined4 local_50;
  undefined4 local_4c;
  
  local_140 = "gml_Object_oPoisonRing_Draw_0";
  local_138 = 0;
  local_148 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_148;
  uVar8 = 1;
  _eh_vector_constructor_iterator_(&local_f8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_6c = 0xffffff;
  local_78 = 0;
  local_124 = 0xffffff;
  local_130 = 0.0;
  local_7c = 0xffffff;
  local_88 = 0.0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_ac = 0xffffff;
  local_b8 = 0.0;
  local_4c = 0xffffff;
  local_58 = 0.0;
  local_5c = 0xffffff;
  local_68 = 0.0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_138 = 3;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0b9a8);
  uStack_14c = 0;
  local_158 = 0.0;
  iVar1 = FUN_140e851f0(puVar2,&local_158,DAT_141955260,1);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if (iVar1 == -2 || 0 < iVar1) {
    local_138 = 5;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f9318);
    local_178 = (longlong *)CONCAT44(uRam0000000141dc7504,_DAT_141dc7500);
    uStack_170 = uRam0000000141dc7508;
    uStack_16c = uRam0000000141dc750c;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_178);
    local_120 = &local_f8;
    if (puVar3 != &local_e8) {
      local_178 = (longlong *)*puVar3;
      uStack_170 = *(undefined4 *)(puVar3 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_178);
    }
    local_118 = (double *)&local_e8;
    puVar3 = (undefined8 *)FUN_140e79090(&local_168,2,&local_120);
    if (puVar3 != &local_78) {
      local_178 = (longlong *)*puVar3;
      uStack_170 = *(undefined4 *)(puVar3 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      FUN_140041b80(&local_78,&local_178);
    }
    local_138 = 6;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    if ((double *)puVar2 != &local_f8) {
      local_178 = (longlong *)*puVar2;
      uStack_170 = *(undefined4 *)(puVar2 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar2 + 0xc);
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_178);
    }
    local_120 = &local_f8;
    uVar6 = CONCAT44(uVar8,DAT_141a08838);
    pdVar4 = (double *)FUN_140e634e0(param_1,param_2,&local_168,1,uVar6,&local_120);
    uVar8 = (undefined4)((ulonglong)uVar6 >> 0x20);
    local_9c = *(undefined4 *)((longlong)pdVar4 + 0xc);
    local_a0 = *(undefined4 *)(pdVar4 + 1);
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) == 0) {
      local_a8 = *pdVar4;
    }
    else {
      FUN_1400419b0(&local_a8,pdVar4);
    }
    uStack_16c = 7;
    local_178 = (longlong *)CONCAT44(local_178._4_4_,2);
    FUN_140042560(&local_a8,&local_178);
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    uStack_14c = local_9c;
    uStack_150 = local_a0;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) == 0) {
      local_158 = local_a8;
    }
    else {
      FUN_1400419b0(&local_158,&local_a8);
    }
    uStack_16c = 7;
    local_178 = (longlong *)CONCAT44(local_178._4_4_,4);
    FUN_1400460e0(&local_158,&local_178);
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = (longlong *)local_158;
    uStack_170 = uStack_150;
    uStack_16c = uStack_14c;
    if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_130);
    }
    FUN_140041b80(&local_130,&local_178);
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_138 = 7;
    uStack_14c = local_124;
    uStack_150 = local_128;
    if ((1 << ((byte)local_124 & 0x1f) & 0x46U) == 0) {
      local_158 = local_130;
    }
    else {
      FUN_1400419b0(&local_158,&local_130);
    }
    uStack_16c = 0;
    local_178 = (longlong *)0x3fe0000000000000;
    FUN_140042560(&local_158,&local_178);
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = (longlong *)local_158;
    uStack_170 = uStack_150;
    uStack_16c = uStack_14c;
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_178);
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_138 = 8;
    uStack_14c = local_124;
    uStack_150 = local_128;
    if ((1 << ((byte)local_124 & 0x1f) & 0x46U) == 0) {
      local_158 = local_130;
    }
    else {
      FUN_1400419b0(&local_158,&local_130);
    }
    uStack_16c = 0;
    local_178 = (longlong *)0x3fe0000000000000;
    FUN_140042560(&local_158,&local_178);
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = (longlong *)local_158;
    uStack_170 = uStack_150;
    uStack_16c = uStack_14c;
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_178);
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_138 = 10;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    local_120 = &local_130;
    local_118 = &local_130;
    uVar6 = CONCAT44(uVar8,DAT_141a04a78);
    pdVar4 = (double *)FUN_140e634e0(param_1,param_2,&local_168,2,uVar6,&local_120);
    uVar8 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (pdVar4 != &local_b8) {
      local_178 = (longlong *)*pdVar4;
      uStack_170 = *(undefined4 *)(pdVar4 + 1);
      uStack_16c = *(undefined4 *)((longlong)pdVar4 + 0xc);
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      FUN_140041b80(&local_b8,&local_178);
    }
    local_138 = 0xb;
    dVar5 = local_b8;
    if ((local_ac & 0xffffff) != 0) {
      dVar5 = (double)FUN_140e4b060(&local_b8);
    }
    FUN_140ec60c0((longlong)dVar5,0xffffffff);
    local_138 = 0xc;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    local_178 = (longlong *)CONCAT44(uRam0000000141dc7504,_DAT_141dc7500);
    uStack_170 = uRam0000000141dc7508;
    uStack_16c = uRam0000000141dc750c;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_178);
    local_120 = &local_f8;
    local_178 = (longlong *)CONCAT44(uRam0000000141dc7504,_DAT_141dc7500);
    uStack_170 = uRam0000000141dc7508;
    uStack_16c = uRam0000000141dc750c;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_178);
    local_118 = (double *)&local_e8;
    uVar6 = CONCAT44(uVar8,DAT_141a04558);
    FUN_140e634e0(param_1,param_2,&local_168,2,uVar6,&local_120);
    uVar8 = (undefined4)((ulonglong)uVar6 >> 0x20);
    local_138 = 0xe;
    FUN_140e9c1f0(0x3f800000);
    local_138 = 0xf;
    FUN_140e9c240(0x5ad246);
    local_138 = 0x10;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    local_120 = &local_88;
    local_118 = (double *)&local_98;
    if (puVar2 != &local_d8) {
      local_178 = (longlong *)*puVar2;
      uStack_170 = *(undefined4 *)(puVar2 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar2 + 0xc);
      if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      FUN_140041b80(&local_d8,&local_178);
    }
    local_110 = &local_d8;
    local_178 = (longlong *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
    uStack_170 = uRam00000001419df7a8;
    uStack_16c = uRam00000001419df7ac;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_178);
    local_108 = local_c8;
    ppdVar9 = &local_120;
    uVar7 = CONCAT44(uVar8,DAT_1419fe448);
    FUN_140e634e0(param_1,param_2,&local_168,4,uVar7,ppdVar9);
    local_138 = 0x12;
    uStack_16c = 0;
    local_178 = (longlong *)0x0;
    iVar1 = FUN_140e851f0(&local_78,&local_178,DAT_141955260,1);
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    if (0 < iVar1) {
      local_138 = 0x14;
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      uVar8 = (undefined4)(uVar7 >> 0x20);
      local_168 = 0;
      local_160 = 0;
      local_15c = 5;
      (**(code **)(*param_1 + 8))(param_1,DAT_141a0b9a8);
      local_178 = (longlong *)CONCAT44(uRam00000001419ed334,_DAT_1419ed330);
      uStack_170 = uRam00000001419ed338;
      uStack_16c = uRam00000001419ed33c;
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_178);
      local_120 = &local_f8;
      uVar6 = CONCAT44(uVar8,DAT_141a04848);
      FUN_140e634e0(param_1,param_2,&local_168,1,uVar6,&local_120);
      uVar8 = (undefined4)((ulonglong)uVar6 >> 0x20);
      local_138 = 0x15;
      FUN_140e9c240(0xffffff);
      local_138 = 0x16;
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      local_168 = 0;
      local_160 = 0;
      local_15c = 5;
      local_120 = &local_88;
      local_118 = (double *)&local_98;
      local_110 = &local_78;
      local_178 = (longlong *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
      uStack_170 = uRam00000001419df7a8;
      uStack_16c = uRam00000001419df7ac;
      if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_c8);
      }
      FUN_140041b80(local_c8,&local_178);
      local_108 = local_c8;
      uVar6 = CONCAT44(uVar8,DAT_1419fe448);
      FUN_140e634e0(param_1,param_2,&local_168,4,uVar6,&local_120);
      uVar8 = (undefined4)((ulonglong)uVar6 >> 0x20);
      local_138 = 0x17;
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      local_168 = 0;
      local_160 = 0;
      local_15c = 5;
      local_178 = (longlong *)CONCAT44(uRam0000000141dc7504,_DAT_141dc7500);
      uStack_170 = uRam0000000141dc7508;
      uStack_16c = uRam0000000141dc750c;
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_178);
      local_120 = &local_f8;
      ppdVar9 = &local_120;
      uVar7 = CONCAT44(uVar8,DAT_141a04848);
      FUN_140e634e0(param_1,param_2,&local_168,1,uVar7,ppdVar9);
    }
    local_138 = 0x1a;
    FUN_140ec7870();
    local_138 = 0x1b;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    uStack_16c = 6;
    uVar10 = (ulonglong)ppdVar9 & 0xffffffffffffff00;
    uVar7 = uVar7 & 0xffffffffffffff00;
    local_178 = param_1;
    FUN_140e87440(&local_178,DAT_1419fe0e8,0x80000000,&local_58,uVar7,uVar10);
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    uStack_16c = 6;
    uVar7 = uVar7 & 0xffffffffffffff00;
    local_178 = param_1;
    FUN_140e87440(&local_178,DAT_1419fe158,0x80000000,&local_68,uVar7,uVar10 & 0xffffffffffffff00);
    uVar8 = (undefined4)(uVar7 >> 0x20);
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_120 = &local_b8;
    uStack_14c = local_4c;
    uStack_150 = local_50;
    if ((1 << ((byte)local_4c & 0x1f) & 0x46U) == 0) {
      local_158 = local_58;
    }
    else {
      FUN_1400419b0(&local_158,&local_58);
    }
    FUN_1400462a0(&local_158,&local_88);
    local_178 = (longlong *)local_158;
    uStack_170 = uStack_150;
    uStack_16c = uStack_14c;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_178);
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_118 = (double *)&local_e8;
    uStack_14c = local_5c;
    uStack_150 = local_60;
    if ((1 << ((byte)local_5c & 0x1f) & 0x46U) == 0) {
      local_158 = local_68;
    }
    else {
      FUN_1400419b0(&local_158,&local_68);
    }
    FUN_1400462a0(&local_158,&local_98);
    local_178 = (longlong *)local_158;
    uStack_170 = uStack_150;
    uStack_16c = uStack_14c;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_178);
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_110 = &local_d8;
    uVar6 = CONCAT44(uVar8,DAT_141a049d8);
    FUN_140e634e0(param_1,param_2,&local_168,3,uVar6,&local_120);
    uVar8 = (undefined4)((ulonglong)uVar6 >> 0x20);
    local_138 = 0x1c;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    local_120 = &local_b8;
    FUN_140e634e0(param_1,param_2,&local_168,1,CONCAT44(uVar8,DAT_141a04918),&local_120);
    local_138 = 0x1e;
    FUN_140e9c1f0(0x3f800000);
    local_138 = 0x1f;
    FUN_140e9c240(0xffffff);
  }
  else {
    local_138 = 3;
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(&local_f8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_148;
  return;
}

