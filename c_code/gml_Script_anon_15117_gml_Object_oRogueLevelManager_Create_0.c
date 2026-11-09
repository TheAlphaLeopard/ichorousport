// gml_Script_anon_15117_gml_Object_oRogueLevelManager_Create_0 @ 0x140cca400

undefined8 *
gml_Script_anon_15117_gml_Object_oRogueLevelManager_Create_0
          (undefined8 **param_1,undefined8 **param_2,undefined8 *param_3,int param_4,
          undefined8 *param_5)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 ***pppuVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  double *pdVar11;
  double *pdVar12;
  undefined8 ***pppuVar13;
  double dVar14;
  double dVar15;
  code *pcVar16;
  ulonglong uVar17;
  undefined4 uVar19;
  undefined8 **ppuVar18;
  ulonglong in_stack_fffffffffffffeb0;
  undefined8 **ppuVar20;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 **local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  undefined8 **local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 **local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 **local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  byte local_7c;
  undefined8 *local_68 [6];
  
  local_100 = "gml_Script_anon@12473@gml_Object_oRogueLevelManager_Create_0";
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  local_f8 = 0x215;
  pcVar16 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_88,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_8c = 0xffffff;
  local_98 = (undefined8 **)0x0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_d4 = 0xffffff;
  local_e0 = (undefined8 **)0x0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_e4 = 0xffffff;
  local_f0 = (undefined8 **)0x0;
  local_12c = 0;
  local_138 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de31c4) {
    _Init_thread_header(&DAT_141de31c4);
    if (DAT_141de31c4 == -1) {
      DAT_141de3318 = FUN_140e63aa0(DAT_1419f9f58);
      _Init_thread_footer(&DAT_141de31c4);
    }
  }
  FUN_140e643a0(param_1,DAT_141de3318);
  local_f8 = 0x217;
  pppuVar5 = (undefined8 ***)(*(code *)(*param_1)[2])(param_1,DAT_1419f9ab8);
  uStack_10c = 6;
  uVar17 = (ulonglong)pcVar16 & 0xffffffffffffff00;
  local_118 = param_2;
  FUN_140e87440(&local_118,DAT_141a0a828,0x80000000,&local_98,uVar17,
                in_stack_fffffffffffffeb0 & 0xffffffffffffff00);
  uVar19 = (undefined4)(uVar17 >> 0x20);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140e609c0(param_1);
  if (&local_98 != pppuVar5) {
    local_148 = local_98;
    uStack_140 = uStack_90;
    uStack_13c = uStack_8c;
    if ((1 << ((byte)*(undefined4 *)((longlong)pppuVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pppuVar5);
    }
    FUN_140041b80(pppuVar5,&local_148);
  }
  FUN_140e60910(1);
  local_f8 = 0x218;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  uVar6 = (*(code *)(*param_2)[1])(param_2,DAT_141a57b10);
  puVar7 = (undefined8 *)(*(code *)(*param_1)[2])(param_1,DAT_1419f9dc8);
  FUN_140e609c0(param_1);
  pdVar12 = (double *)&DAT_1419df7b0;
  if (param_4 < 2) {
    pdVar11 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar11 = (double *)param_5[1];
  }
  if ((*(uint *)((longlong)pdVar11 + 0xc) & 0xffffff) == 0) {
    dVar14 = *pdVar11;
  }
  else {
    dVar14 = (double)FUN_140e4b060();
  }
  if (0 < param_4) {
    pdVar12 = (double *)*param_5;
  }
  if ((*(uint *)((longlong)pdVar12 + 0xc) & 0xffffff) == 0) {
    dVar15 = *pdVar12;
  }
  else {
    dVar15 = (double)FUN_140e4b060(pdVar12);
  }
  uVar4 = FUN_140e4a740(uVar6);
  puVar8 = (undefined8 *)FUN_140ea8b20(&local_138,uVar4,(longlong)dVar15,(longlong)dVar14);
  if (puVar8 != puVar7) {
    local_148 = (undefined8 **)*puVar8;
    uStack_140 = *(undefined4 *)(puVar8 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_148);
  }
  FUN_140e60910(1);
  local_f8 = 0x219;
  puVar7 = (undefined8 *)(*(code *)(*param_1)[2])(param_1,DAT_1419f9918);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar7);
  }
  *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
  *puVar7 = 0;
  local_f8 = 0x21b;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  puVar7 = (undefined8 *)(*(code *)(*param_1)[1])(param_1,DAT_1419f9918);
  if (puVar7 != &local_88) {
    local_148 = (undefined8 **)*puVar7;
    uStack_140 = *(undefined4 *)(puVar7 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_148);
  }
  local_68[0] = &local_88;
  ppuVar20 = local_68;
  ppuVar18 = (undefined8 **)CONCAT44(uVar19,DAT_1419fcb88);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_138,1,ppuVar18,ppuVar20);
  cVar3 = FUN_140e491e0(uVar6);
  if (cVar3 == '\0') {
LAB_140cca8bd:
    uStack_13c = 0xf;
    local_148 = (undefined8 **)0x10000010000011b;
    pppuVar5 = (undefined8 ***)&local_148;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    uVar6 = (*(code *)(*param_1)[1])(param_1,DAT_1419f9dc8);
    ppuVar20 = (undefined8 **)((ulonglong)ppuVar20 & 0xffffffffffffff00);
    ppuVar18 = (undefined8 **)((ulonglong)ppuVar18 & 0xffffffffffffff00);
    FUN_140e87440(uVar6,DAT_1419ffb98,0x80000000,&local_c0,ppuVar18,ppuVar20);
    cVar3 = FUN_140e491e0(&local_c0);
    if (cVar3 == '\0') goto LAB_140cca8bd;
    uVar6 = (*(code *)(*param_1)[1])(param_1,DAT_1419f9918);
    ppuVar18 = param_1;
    ppuVar20 = param_2;
    FUN_140e87170(uVar6,DAT_141a0a728,0x80000000,&local_e0,param_1,param_2);
    uStack_10c = local_d4;
    uStack_110 = local_d8;
    if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) == 0) {
      local_118 = local_e0;
    }
    else {
      FUN_1400419b0(&local_118,&local_e0);
    }
    pppuVar5 = &local_118;
    bVar2 = true;
    bVar1 = false;
  }
  uVar19 = uStack_13c;
  local_128 = *(undefined4 *)pppuVar5;
  uStack_124 = *(undefined4 *)((longlong)pppuVar5 + 4);
  uStack_120 = *(undefined4 *)(pppuVar5 + 1);
  uStack_11c = *(undefined4 *)((longlong)pppuVar5 + 0xc);
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  FUN_140041b80(&local_d0,&local_128);
  if (bVar1) {
    if ((1 << ((byte)uVar19 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
  }
  if ((bVar2) && ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_118);
  }
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_d0);
  local_f8 = 0x21d;
  puVar7 = (undefined8 *)(*(code *)(*param_1)[2])(param_1,DAT_1419f9968);
  uStack_13c = 6;
  uVar17 = (ulonglong)ppuVar18 & 0xffffffffffffff00;
  local_148 = param_1;
  FUN_140e87440(&local_148,DAT_141a0a728,0x80000000,&local_a8,uVar17,
                (ulonglong)ppuVar20 & 0xffffffffffffff00);
  uVar19 = (undefined4)(uVar17 >> 0x20);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  FUN_140e609c0(param_1);
  if (&local_a8 != puVar7) {
    local_128 = (undefined4)local_a8;
    uStack_124 = local_a8._4_4_;
    uStack_120 = uStack_a0;
    uStack_11c = uStack_9c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_128);
  }
  FUN_140e60910(1);
  local_f8 = 0x21e;
  pppuVar5 = (undefined8 ***)(*(code *)(*param_1)[2])(param_1,DAT_1419f9a18);
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  puVar7 = (undefined8 *)(*(code *)(*param_1)[1])(param_1,DAT_1419f9dc8);
  if (puVar7 != &local_88) {
    local_128 = *(undefined4 *)puVar7;
    uStack_124 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_120 = *(undefined4 *)(puVar7 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_128);
  }
  local_68[0] = &local_88;
  ppuVar20 = local_68;
  uVar17 = CONCAT44(uVar19,DAT_1419fcb88);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_138,1,uVar17,ppuVar20);
  cVar3 = FUN_140e491e0(uVar6);
  if (cVar3 != '\0') {
    puVar7 = (undefined8 *)(*(code *)(*param_1)[1])(param_1,DAT_1419f9dc8);
    FUN_140e87440(puVar7,DAT_1419ffb98,0x80000000,&local_c0,uVar17 & 0xffffffffffffff00,
                  (ulonglong)ppuVar20 & 0xffffffffffffff00);
    cVar3 = FUN_140e491e0(&local_c0);
    if (cVar3 != '\0') {
      uVar6 = (*(code *)(*param_1)[1])(param_1,DAT_1419f9dc8);
      FUN_140e87170(uVar6,DAT_141a0a728,0x80000000,&local_f0,param_1,param_2);
      uStack_10c = local_e4;
      uStack_110 = local_e8;
      if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) == 0) {
        local_118 = local_f0;
      }
      else {
        FUN_1400419b0(&local_118,&local_f0);
      }
      pppuVar13 = &local_118;
      bVar2 = true;
      bVar1 = false;
      goto LAB_140ccabbe;
    }
  }
  uStack_13c = 0xf;
  local_148 = (undefined8 **)0x10000010000011b;
  pppuVar13 = (undefined8 ***)&local_148;
  bVar2 = false;
  bVar1 = true;
LAB_140ccabbe:
  uVar19 = uStack_13c;
  FUN_140e609c0(param_1);
  if (pppuVar13 != pppuVar5) {
    local_128 = *(undefined4 *)pppuVar13;
    uStack_124 = *(undefined4 *)((longlong)pppuVar13 + 4);
    uStack_120 = *(undefined4 *)(pppuVar13 + 1);
    uStack_11c = *(undefined4 *)((longlong)pppuVar13 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)pppuVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pppuVar5);
    }
    FUN_140041b80(pppuVar5,&local_128);
  }
  if (bVar1) {
    if ((1 << ((byte)uVar19 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
  }
  if ((bVar2) && ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_118);
  }
  FUN_140e60910(1);
  local_f8 = 0x220;
  puVar8 = (undefined8 *)(*(code *)(*param_1)[2])(param_1,DAT_1419f9ed8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar8);
  }
  *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
  *puVar8 = 0;
  local_f8 = 0x221;
  puVar8 = (undefined8 *)(*(code *)(*param_1)[2])(param_1,DAT_1419f9c48);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar8);
  }
  *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
  *puVar8 = 0x4032000000000000;
  local_f8 = 0x222;
  puVar9 = (undefined4 *)(*(code *)(*param_1)[1])(param_1,DAT_1419f9c48);
  puVar10 = (undefined4 *)(*(code *)(*param_1)[2])(param_1,DAT_1419f9e68);
  FUN_140e609c0(param_1);
  if (puVar9 != puVar10) {
    local_128 = *puVar9;
    uStack_124 = puVar9[1];
    uStack_120 = puVar9[2];
    uStack_11c = puVar9[3];
    if ((1 << ((byte)puVar10[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar10);
    }
    FUN_140041b80(puVar10,&local_128);
  }
  FUN_140e60910(1);
  local_f8 = 0x224;
  puVar8 = (undefined8 *)(*(code *)(*param_1)[2])(param_1,DAT_1419f9d98);
  FUN_140e609c0(param_1);
  if (puVar7 != puVar8) {
    local_128 = *(undefined4 *)puVar7;
    uStack_124 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_120 = *(undefined4 *)(puVar7 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_128);
  }
  FUN_140e60910(1);
  local_f8 = 0x225;
  puVar9 = (undefined4 *)(*(code *)(*param_1)[1])(param_1,DAT_1419f9a18);
  puVar10 = (undefined4 *)(*(code *)(*param_1)[2])(param_1,DAT_1419f9c88);
  FUN_140e609c0(param_1);
  if (puVar9 != puVar10) {
    local_128 = *puVar9;
    uStack_124 = puVar9[1];
    uStack_120 = puVar9[2];
    uStack_11c = puVar9[3];
    if ((1 << ((byte)puVar10[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar10);
    }
    FUN_140041b80(puVar10,&local_128);
  }
  FUN_140e60910(1);
  local_f8 = 0x226;
  puVar7 = (undefined8 *)(*(code *)(*param_1)[2])(param_1,DAT_1419f9978);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar7);
  }
  *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
  *puVar7 = 0;
  local_f8 = 0x227;
  puVar7 = (undefined8 *)(*(code *)(*param_1)[2])(param_1,DAT_1419f9bb8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar7);
  }
  *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
  *puVar7 = 0;
  local_f8 = 0x22a;
  puVar7 = (undefined8 *)(*(code *)(*param_1)[2])(param_1,DAT_141a570f0);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_148,gml_Script_anon_14056_anon_12473_gml_Object_oRogueLevelManager_Create_0,
                param_1);
  if (&local_148 != puVar7) {
    local_128 = (undefined4)local_148;
    uStack_124 = local_148._4_4_;
    uStack_120 = uStack_140;
    uStack_11c = uStack_13c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_128);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  FUN_140e60910(1);
  local_f8 = 0x239;
  puVar7 = (undefined8 *)(*(code *)(*param_1)[2])(param_1,DAT_1419f9b68);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_148,gml_Script_anon_12473_gml_Object_oRogueLevelManager_Create_0,param_1);
  if (&local_148 != puVar7) {
    local_128 = (undefined4)local_148;
    uStack_124 = local_148._4_4_;
    uStack_120 = uStack_140;
    uStack_11c = uStack_13c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_128);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  FUN_140e60910(1);
  local_f8 = 0x249;
  puVar7 = (undefined8 *)(*(code *)(*param_1)[2])(param_1,DAT_141a0a968);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_148,gml_Script_anon_14733_gml_Object_oRogueLevelManager_Create_0,param_1);
  if (&local_148 != puVar7) {
    local_128 = (undefined4)local_148;
    uStack_124 = local_148._4_4_;
    uStack_120 = uStack_140;
    uStack_11c = uStack_13c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_128);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(&local_88,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_108;
  return param_3;
}

