// gml_Script__shader_uniforms_disabled_anon_57807___set_standard_uniforms_anon_55077___scribble_class_element___scribble_class_element @ 0x140132490

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script__shader_uniforms_disabled_anon_57807___set_standard_uniforms_anon_55077___scribble_class_element___scribble_class_element
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double *pdVar8;
  uint uVar9;
  double *pdVar10;
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double local_168;
  undefined4 local_160;
  uint local_15c;
  double local_158;
  undefined4 local_150;
  uint local_14c;
  double local_148;
  undefined4 local_140;
  uint local_13c;
  double local_138;
  undefined4 local_130;
  uint local_12c;
  undefined4 local_128 [3];
  undefined4 local_11c;
  undefined8 local_118;
  char *local_110;
  undefined4 local_108;
  double local_100;
  undefined4 local_f8;
  uint local_f4;
  double local_f0;
  undefined4 local_e8;
  uint local_e4;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined4 local_94;
  uint local_90 [2];
  undefined8 *local_88;
  
  local_110 = 
  "gml_Script_debug_draw_bbox@anon@48736@__scribble_class_element@__scribble_class_element";
  local_118 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_118;
  local_108 = 0x644;
  FUN_140041df0(local_90,param_4,2,param_5);
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_94 = 0;
  local_a0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_108 = 0x648;
  puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_a0,0,DAT_141a052c8,0);
  if (puVar5 != &local_e0) {
    local_b0 = *puVar5;
    uStack_a8 = *(undefined4 *)(puVar5 + 1);
    uStack_a4 = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e0);
    }
    FUN_140041b80(&local_e0,&local_b0);
  }
  local_108 = 0x649;
  FUN_140e9c240(0xff);
  local_108 = 0x64b;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05b48);
  local_b4 = *(undefined4 *)((longlong)puVar5 + 0xc);
  local_b8 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) == 0) {
    local_c0 = *puVar5;
  }
  else {
    FUN_1400419b0(&local_c0,puVar5);
  }
  lVar1 = *(longlong *)ThreadLocalStoragePointer;
  if ((*(int *)(lVar1 + 0x18) < DAT_141ddce44) &&
     (_Init_thread_header(&DAT_141ddce44), DAT_141ddce44 == -1)) {
    _DAT_141ddce54 = 0;
    _DAT_141ddce48 = 0;
    _DAT_141ddce68 = 0;
    _DAT_141ddce5c = 0x3ff0000000000000;
    _DAT_141ddce6c = 1;
    _DAT_141ddce7c = 0;
    _DAT_141ddce70 = 0x4000000000000000;
    _DAT_141ddce80 = 2;
    atexit((_func_5014 *)&LAB_1414681b0);
    _Init_thread_footer(&DAT_141ddce44);
  }
  uVar9 = 0;
  do {
    iVar4 = FUN_140e851f0(&DAT_141ddce48 + (longlong)(int)uVar9 * 0x14,&local_c0,DAT_141955260,0);
    pdVar10 = (double *)&DAT_1419df7b0;
    uVar11 = (ulonglong)local_90[0];
    if (iVar4 == 0) {
      iVar4 = *(int *)(&DAT_141ddce58 + (longlong)(int)uVar9 * 0x14);
      if (iVar4 != 0) {
        if (iVar4 == 1) {
          local_108 = 0x64e;
          pdVar8 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a053e8);
          local_15c = *(undefined4 *)((longlong)pdVar8 + 0xc);
          local_160 = *(undefined4 *)(pdVar8 + 1);
          if ((1 << ((byte)local_15c & 0x1f) & 0x46U) == 0) {
            local_168 = *pdVar8;
          }
          else {
            FUN_1400419b0(&local_168,pdVar8);
          }
          local_12c = 0;
          local_138 = 2.0;
          FUN_140046500(&local_168,&local_138);
          if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_138);
          }
          if ((int)local_90[0] < 1) {
            puVar5 = &DAT_1419df7b0;
          }
          else {
            puVar5 = (undefined8 *)*local_88;
          }
          FUN_1400462a0(puVar5,&local_168);
          if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_168);
          }
        }
        else if (iVar4 == 2) {
          local_108 = 0x64f;
          uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a053e8);
          if ((int)local_90[0] < 1) {
            FUN_1400462a0(&DAT_1419df7b0,uVar6);
          }
          else {
            FUN_1400462a0(*local_88,uVar6);
          }
        }
      }
      break;
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 3);
  uVar9 = 0;
  local_108 = 0x652;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05ab8);
  local_c4 = *(undefined4 *)((longlong)puVar5 + 0xc);
  local_c8 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) == 0) {
    local_d0 = *puVar5;
  }
  else {
    FUN_1400419b0(&local_d0,puVar5);
  }
  if ((*(int *)(lVar1 + 0x18) < DAT_141ddce40) &&
     (_Init_thread_header(&DAT_141ddce40), DAT_141ddce40 == -1)) {
    _DAT_141ddceb4 = 0;
    _DAT_141ddcea8 = 0;
    _DAT_141ddcec8 = 0;
    _DAT_141ddcebc = 0x3ff0000000000000;
    _DAT_141ddcecc = 1;
    _DAT_141ddcedc = 0;
    _DAT_141ddced0 = 0x4000000000000000;
    _DAT_141ddcee0 = 2;
    atexit((_func_5014 *)&LAB_141468190);
    _Init_thread_footer(&DAT_141ddce40);
  }
  do {
    iVar4 = FUN_140e851f0(&DAT_141ddcea8 + (longlong)(int)uVar9 * 0x14,&local_d0,DAT_141955260,0);
    if (iVar4 == 0) {
      iVar4 = (&DAT_141ddceb8)[(longlong)(int)uVar9 * 5];
      if (iVar4 != 0) {
        if (iVar4 == 1) {
          local_108 = 0x655;
          pdVar8 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a04f18);
          local_15c = *(undefined4 *)((longlong)pdVar8 + 0xc);
          local_160 = *(undefined4 *)(pdVar8 + 1);
          if ((1 << ((byte)local_15c & 0x1f) & 0x46U) == 0) {
            local_168 = *pdVar8;
          }
          else {
            FUN_1400419b0(&local_168,pdVar8);
          }
          local_12c = 0;
          local_138 = 2.0;
          FUN_140046500(&local_168,&local_138);
          if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_138);
          }
          if ((int)local_90[0] < 2) {
            puVar5 = &DAT_1419df7b0;
          }
          else {
            puVar5 = (undefined8 *)local_88[1];
          }
          FUN_1400462a0(puVar5,&local_168);
          if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_168);
          }
        }
        else if (iVar4 == 2) {
          local_108 = 0x656;
          uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a04f18);
          if ((int)local_90[0] < 2) {
            FUN_1400462a0(&DAT_1419df7b0,uVar6);
          }
          else {
            FUN_1400462a0(local_88[1],uVar6);
          }
        }
      }
      break;
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 3);
  local_108 = 0x659;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a053e8);
  uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a04f18);
  local_15c = 0xd;
  local_168 = 1.0;
  if ((int)local_90[0] < 2) {
    pdVar8 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar8 = (double *)local_88[1];
  }
  local_14c = *(uint *)((longlong)pdVar8 + 0xc);
  local_150 = *(undefined4 *)(pdVar8 + 1);
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) == 0) {
    local_158 = *pdVar8;
  }
  else {
    FUN_1400419b0(&local_158);
  }
  FUN_1400460e0(&local_158,uVar7);
  if ((int)local_90[0] < 1) {
    pdVar8 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar8 = (double *)*local_88;
  }
  local_13c = *(uint *)((longlong)pdVar8 + 0xc);
  local_140 = *(undefined4 *)(pdVar8 + 1);
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) == 0) {
    local_148 = *pdVar8;
  }
  else {
    FUN_1400419b0(&local_148);
  }
  FUN_1400460e0(&local_148,uVar6);
  uVar3 = FUN_140e491e0(&local_168);
  dVar12 = local_158;
  if ((local_14c & 0xffffff) != 0) {
    dVar12 = (double)FUN_140e4b060(&local_158);
  }
  dVar13 = local_148;
  if ((local_13c & 0xffffff) != 0) {
    dVar13 = (double)FUN_140e4b060(&local_148);
  }
  if ((int)local_90[0] < 2) {
    pdVar8 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar8 = (double *)local_88[1];
  }
  if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
    dVar14 = *pdVar8;
  }
  else {
    dVar14 = (double)FUN_140e4b060();
  }
  if ((int)local_90[0] < 1) {
    pdVar8 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar8 = (double *)*local_88;
  }
  if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
    dVar15 = *pdVar8;
  }
  else {
    dVar15 = (double)FUN_140e4b060();
  }
  FUN_140e9c1c0((float)dVar15,(float)dVar14,(float)dVar13,(float)dVar12,uVar3);
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_108 = 0x65a;
  uStack_a4 = 0xd;
  local_b0 = 0x3ff0000000000000;
  if ((int)local_90[0] < 2) {
    pdVar8 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar8 = (double *)local_88[1];
  }
  local_13c = *(uint *)((longlong)pdVar8 + 0xc);
  local_140 = *(undefined4 *)(pdVar8 + 1);
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) == 0) {
    local_148 = *pdVar8;
  }
  else {
    FUN_1400419b0(&local_148);
  }
  local_11c = 7;
  local_128[0] = 1;
  FUN_1400462a0(&local_148,local_128);
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  local_15c = local_13c;
  local_160 = local_140;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) == 0) {
    local_168 = local_148;
  }
  else {
    FUN_1400419b0(&local_168,&local_148);
  }
  FUN_1400460e0(&local_168,uVar7);
  if ((int)local_90[0] < 1) {
    pdVar8 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar8 = (double *)*local_88;
  }
  local_14c = *(uint *)((longlong)pdVar8 + 0xc);
  local_150 = *(undefined4 *)(pdVar8 + 1);
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) == 0) {
    local_158 = *pdVar8;
  }
  else {
    FUN_1400419b0(&local_158);
  }
  local_11c = 7;
  local_128[0] = 1;
  FUN_1400462a0(&local_158,local_128);
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  local_12c = local_14c;
  local_130 = local_150;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) == 0) {
    local_138 = local_158;
  }
  else {
    FUN_1400419b0(&local_138,&local_158);
  }
  FUN_1400460e0(&local_138,uVar6);
  if ((int)local_90[0] < 2) {
    pdVar8 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar8 = (double *)local_88[1];
  }
  local_e4 = *(uint *)((longlong)pdVar8 + 0xc);
  local_e8 = *(undefined4 *)(pdVar8 + 1);
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) == 0) {
    local_f0 = *pdVar8;
  }
  else {
    FUN_1400419b0(&local_f0);
  }
  local_11c = 7;
  local_128[0] = 1;
  FUN_1400460e0(&local_f0,local_128);
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  if (0 < (int)local_90[0]) {
    pdVar10 = (double *)*local_88;
  }
  local_f4 = *(uint *)((longlong)pdVar10 + 0xc);
  local_f8 = *(undefined4 *)(pdVar10 + 1);
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) == 0) {
    local_100 = *pdVar10;
  }
  else {
    FUN_1400419b0(&local_100,pdVar10);
  }
  local_11c = 7;
  local_128[0] = 1;
  FUN_1400460e0(&local_100,local_128);
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  uVar3 = FUN_140e491e0(&local_b0);
  dVar12 = local_168;
  if ((local_15c & 0xffffff) != 0) {
    dVar12 = (double)FUN_140e4b060(&local_168);
  }
  dVar13 = local_138;
  if ((local_12c & 0xffffff) != 0) {
    dVar13 = (double)FUN_140e4b060(&local_138);
  }
  dVar14 = local_f0;
  if ((local_e4 & 0xffffff) != 0) {
    dVar14 = (double)FUN_140e4b060(&local_f0);
  }
  dVar15 = local_100;
  if ((local_f4 & 0xffffff) != 0) {
    dVar15 = (double)FUN_140e4b060(&local_100);
  }
  FUN_140e9c1c0((float)dVar15,(float)dVar14,(float)dVar13,(float)dVar12,uVar3);
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uStack_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  local_108 = 0x65c;
  uVar6 = FUN_140e4a8b0(&local_e0);
  FUN_140e9c240(uVar6);
  local_108 = 0x65e;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar6 = FUN_140e5c910();
  FUN_140e42c10(uVar6,param_1);
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if (0 < (int)local_90[0]) {
    puVar5 = local_88;
    do {
      puVar2 = (undefined8 *)*puVar5;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 5;
      puVar5 = puVar5 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  FUN_140e4cd60(local_88);
  DAT_141dc7a50 = (undefined8 *)local_118;
  return param_3;
}

