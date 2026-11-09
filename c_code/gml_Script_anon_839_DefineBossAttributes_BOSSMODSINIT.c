// gml_Script_anon_839_DefineBossAttributes_BOSSMODSINIT @ 0x140236410

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_839_DefineBossAttributes_BOSSMODSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  longlong *local_res8;
  undefined8 local_res10;
  ulonglong uVar15;
  undefined4 uVar17;
  longlong **pplVar16;
  undefined1 **in_stack_fffffffffffffe40;
  ulonglong uVar18;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  longlong *local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  longlong *local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  char *local_140;
  undefined4 local_138;
  undefined1 local_128 [16];
  longlong local_118 [2];
  longlong local_108 [2];
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 *local_a8;
  longlong *local_a0;
  longlong *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 local_68 [16];
  longlong local_58;
  
  local_140 = "gml_Script_anon@147@DefineBossAttributes@BOSSMODSINIT";
  local_148 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_148;
  local_138 = 5;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_128,0x10,8,FUN_1400424d0,FUN_140041b30);
  uStack_14c = 0xffffff;
  local_158 = 0;
  uStack_15c = 0xffffff;
  local_168 = 0;
  local_18c = 0;
  local_198 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_138 = 7;
  plVar9 = &DAT_1419df7b0;
  if (param_4 < 1) {
    plVar10 = &DAT_1419df7b0;
  }
  else {
    plVar10 = (longlong *)*param_5;
  }
  if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar10, lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x24) < 1) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
      plVar10 = (longlong *)0x0;
    }
    else {
      plVar10 = *(longlong **)(lVar1 + 8);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (plVar10 != local_118) {
    local_1b8 = (longlong *)*plVar10;
    uStack_1b0 = (undefined4)plVar10[1];
    uStack_1ac = *(undefined4 *)((longlong)plVar10 + 0xc);
    if ((1 << ((byte)local_118[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_1b8);
  }
  local_a0 = local_118;
  if (param_4 < 1) {
    plVar10 = &DAT_1419df7b0;
  }
  else {
    plVar10 = (longlong *)*param_5;
  }
  if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar10, lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x24) < 2) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
      plVar10 = (longlong *)0x0;
    }
    else {
      plVar10 = (longlong *)(*(longlong *)(lVar1 + 8) + 0x10);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (plVar10 != local_108) {
    local_1b8 = (longlong *)*plVar10;
    uStack_1b0 = (undefined4)plVar10[1];
    uStack_1ac = *(undefined4 *)((longlong)plVar10 + 0xc);
    if ((1 << ((byte)local_108[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_1b8);
  }
  local_98 = local_108;
  uStack_17c = 0xf;
  local_188 = (longlong *)0x100000000000003;
  local_1b8 = (longlong *)0x100000000000003;
  uStack_1b0 = uStack_180;
  uStack_1ac = 0xf;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_1b8);
  local_90 = local_f8;
  if (0 < param_4) {
    plVar9 = (longlong *)*param_5;
  }
  if (((*(uint *)((longlong)plVar9 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar9, lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x24) < 3) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",2);
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar9 = (longlong *)(*(longlong *)(lVar1 + 8) + 0x20);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  uVar14 = FUN_140e794b0(0,0x4024000000000000);
  uStack_19c = *(undefined4 *)((longlong)plVar9 + 0xc);
  uStack_1a0 = (undefined4)plVar9[1];
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) == 0) {
    local_1a8 = (longlong *)*plVar9;
  }
  else {
    FUN_1400419b0(&local_1a8,plVar9);
  }
  FUN_140162c50(&local_1a8,uVar14);
  local_1b8 = local_1a8;
  uStack_1b0 = uStack_1a0;
  uStack_1ac = uStack_19c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_1b8);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1b8 = (longlong *)CONCAT44(uRam00000001419e3764,_DAT_1419e3760);
  uStack_1b0 = uRam00000001419e3768;
  uStack_1ac = uRam00000001419e376c;
  local_88 = local_e8;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_1b8);
  local_80 = local_d8;
  local_1b8 = (longlong *)CONCAT44(uRam00000001419e3754,_DAT_1419e3750);
  uStack_1b0 = uRam00000001419e3758;
  uStack_1ac = uRam00000001419e375c;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_1b8);
  local_78 = local_c8;
  local_1b8 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_1b0 = DAT_1419df7b8;
  uStack_1ac = DAT_1419df7bc;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_1b8);
  local_70 = local_b8;
  pplVar16 = &local_a0;
  uVar14 = FUN_140265f80(local_res8,local_res10,&local_198,7,pplVar16);
  iVar3 = FUN_140e63cb0(local_68,&local_res8,&local_res10,uVar14);
  if (0 < iVar3) {
    do {
      local_138 = 9;
      pdVar4 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f290);
      pdVar5 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1eed0);
      pdVar6 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
      if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
        dVar12 = *pdVar5;
      }
      else {
        dVar12 = (double)FUN_140e4b060(pdVar5);
      }
      if ((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) == 0) {
        dVar13 = *pdVar4;
      }
      else {
        dVar13 = (double)FUN_140e4b060(pdVar4);
      }
      fVar11 = (float)FUN_140e78f90((float)dVar13,(float)dVar12);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar6);
      }
      *(undefined4 *)((longlong)pdVar6 + 0xc) = 0;
      *pdVar6 = (double)fVar11;
      local_138 = 10;
      pdVar6 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
      if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
        dVar12 = *pdVar5;
      }
      else {
        dVar12 = (double)FUN_140e4b060(pdVar5);
      }
      if ((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) == 0) {
        dVar13 = *pdVar4;
      }
      else {
        dVar13 = (double)FUN_140e4b060(pdVar4);
      }
      fVar11 = (float)FUN_140e79010((float)dVar13,(float)dVar12);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar6);
      }
      *(undefined4 *)((longlong)pdVar6 + 0xc) = 0;
      *pdVar6 = (double)fVar11;
      local_138 = 0xc;
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      local_198 = 0;
      local_190 = 0;
      local_18c = 5;
      puVar7 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f0d0);
      uStack_19c = 6;
      local_1a8 = local_res8;
      uVar18 = (ulonglong)in_stack_fffffffffffffe40 & 0xffffffffffffff00;
      uVar15 = (ulonglong)pplVar16 & 0xffffffffffffff00;
      FUN_140e87440(&local_1a8,DAT_1419fe0e8,0x80000000,&local_158,uVar15,uVar18);
      if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      uStack_17c = 6;
      local_188 = local_res8;
      uVar15 = uVar15 & 0xffffffffffffff00;
      FUN_140e87440(&local_188,DAT_1419fe158,0x80000000,&local_168,uVar15,
                    uVar18 & 0xffffffffffffff00);
      uVar17 = (undefined4)(uVar15 >> 0x20);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_178 = (undefined4)local_158;
      uStack_174 = local_158._4_4_;
      uStack_170 = uStack_150;
      uStack_16c = uStack_14c;
      if ((1 << (local_128[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_128);
      }
      FUN_140041b80(local_128,&local_178);
      local_a8 = local_128;
      local_178 = (undefined4)local_168;
      uStack_174 = local_168._4_4_;
      uStack_170 = uStack_160;
      uStack_16c = uStack_15c;
      if ((1 << ((byte)local_118[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_118);
      }
      FUN_140041b80(local_118,&local_178);
      local_a0 = local_118;
      uStack_1ac = 0xf;
      local_1b8 = (longlong *)0x100000000000025;
      local_178 = 0x25;
      uStack_174 = 0x1000000;
      uStack_170 = uStack_1b0;
      uStack_16c = 0xf;
      if ((1 << ((byte)local_108[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_178);
      local_98 = local_108;
      FUN_140e609c0(local_res8);
      in_stack_fffffffffffffe40 = &local_a8;
      pplVar16 = (longlong **)CONCAT44(uVar17,DAT_141a1f460);
      puVar8 = (undefined4 *)
               FUN_140e634e0(local_res8,local_res10,&local_198,3,pplVar16,in_stack_fffffffffffffe40)
      ;
      if (puVar8 != puVar7) {
        local_178 = *puVar8;
        uStack_174 = puVar8[1];
        uStack_170 = puVar8[2];
        uStack_16c = puVar8[3];
        if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar7);
        }
        FUN_140041b80(puVar7,&local_178);
      }
      FUN_140e60910(1);
      cVar2 = FUN_140e643f0(local_68,&local_res8,&local_res10);
    } while (cVar2 != '\0');
  }
  FUN_140e63970(local_68,&local_res8,&local_res10);
  if (local_58 != 0) {
    FUN_140e4cd60();
    local_58 = 0;
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  _eh_vector_destructor_iterator_(local_128,0x10,8,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_148;
  return param_3;
}

