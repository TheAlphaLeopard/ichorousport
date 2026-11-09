// gml_Script_anon_1900_gml_Object_oRunManager_Create_0 @ 0x140d444b0

undefined8 *
gml_Script_anon_1900_gml_Object_oRunManager_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  code *pcVar14;
  double local_168;
  undefined4 local_160;
  uint local_15c;
  uint local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 local_144;
  double local_140;
  undefined4 local_138;
  uint local_134;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  char *local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 *local_f0;
  double *local_e8;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined4 local_d0 [3];
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [72];
  
  uVar13 = 0;
  local_158 = 0;
  local_110 = "gml_Script_anon@1112@gml_Object_oRunManager_Create_0";
  local_118 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_118;
  local_108 = 0x39;
  pcVar14 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_88,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_11c = 0xffffff;
  local_128 = 0;
  local_15c = 0xffffff;
  local_168 = 0.0;
  local_a4 = 0;
  local_b0 = 0;
  local_144 = 0;
  local_150 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_108 = 0x3a;
  puVar8 = (undefined8 *)FUN_140e8da20(&local_b0,param_1,0);
  if (puVar8 != &local_128) {
    local_100 = *puVar8;
    uStack_f8 = *(undefined4 *)(puVar8 + 1);
    uStack_f4 = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_100);
  }
  local_108 = 0x3b;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_15c = 0;
  local_168 = 0.0;
  bVar2 = true;
  do {
    if (!bVar2) {
      local_108 = 0x3b;
      uVar4 = local_15c & 0xffffff;
      if (uVar4 != 0) {
        if (uVar4 != 1) {
          if (uVar4 == 7) {
            local_168 = (double)CONCAT44(local_168._4_4_,local_168._0_4_ + 1);
          }
          else if (uVar4 == 10) {
            local_168 = (double)((longlong)local_168 + 1);
          }
          else {
            if (uVar4 == 0xd) {
              local_15c = 0;
              goto LAB_140d4465a;
            }
            FUN_140042910(&DAT_14172c3d8,&local_168,&local_168);
          }
          goto LAB_140d44664;
        }
        local_168 = (double)FUN_140e4b060(&local_168);
        local_15c = 0;
      }
LAB_140d4465a:
      local_168 = local_168 + 1.0;
    }
LAB_140d44664:
    bVar2 = false;
    uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f56c8);
    iVar5 = FUN_140e851f0(&local_168,uVar9,DAT_141955260,1);
    if ((iVar5 == -2) || (-1 < iVar5)) break;
    local_108 = 0x3c;
    plVar10 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f56f8);
    iVar5 = FUN_140e4a740(&local_168);
    if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar10, lVar1 != 0)) {
      if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar10 = (longlong *)0x0;
      }
      else {
        plVar10 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    local_134 = 10;
    local_140 = 4.94065645841247e-324;
    iVar5 = FUN_140e851f0(plVar10,&local_140,DAT_141955260,0);
    if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_140);
    }
    uVar7 = (undefined4)((ulonglong)pcVar14 >> 0x20);
    if (iVar5 == 0) {
      local_108 = 0x3d;
      puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f56f8);
      FUN_140e609c0(param_1);
      uVar6 = FUN_140e4a740(&local_168);
      puVar11 = (undefined8 *)FUN_140e48e40(puVar8,uVar6);
      FUN_140e609c0(*(undefined8 *)*puVar8);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar11);
      }
      *(undefined4 *)((longlong)puVar11 + 0xc) = 10;
      *puVar11 = 2;
      FUN_140e60910(2);
      local_108 = 0x3e;
      if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_150);
      }
      local_150 = 0;
      local_148 = 0;
      local_144 = 5;
      local_f0 = &local_128;
      local_e8 = &local_168;
      pcVar14 = (code *)CONCAT44(uVar7,DAT_1419fe568);
      FUN_140e634e0(param_1,param_2,&local_150,2,pcVar14,&local_f0);
    }
  } while( true );
  local_108 = 0x41;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_15c = 0;
  local_168 = 0.0;
  bVar2 = true;
LAB_140d448a0:
  do {
    if (!bVar2) {
      local_108 = 0x41;
      uVar4 = local_15c & 0xffffff;
      if (uVar4 != 0) {
        if (uVar4 != 1) {
          if (uVar4 == 7) {
            local_168 = (double)CONCAT44(local_168._4_4_,local_168._0_4_ + 1);
          }
          else if (uVar4 == 10) {
            local_168 = (double)((longlong)local_168 + 1);
          }
          else {
            if (uVar4 == 0xd) {
              local_15c = 0;
              goto LAB_140d448f9;
            }
            FUN_140042910(&DAT_14172c3d8,&local_168,&local_168);
          }
          goto LAB_140d44903;
        }
        local_168 = (double)FUN_140e4b060(&local_168);
        local_15c = 0;
      }
LAB_140d448f9:
      local_168 = local_168 + 1.0;
    }
LAB_140d44903:
    uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f56c8);
    iVar5 = FUN_140e851f0(&local_168,uVar9,DAT_141955260,1);
    if ((iVar5 == -2) || (-1 < iVar5)) {
      local_108 = 0x47;
      if (&local_128 != param_3) {
        local_98 = (undefined4)local_128;
        uStack_94 = local_128._4_4_;
        uStack_90 = uStack_120;
        uStack_8c = uStack_11c;
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        FUN_140041b80(param_3,&local_98);
      }
      if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_150);
      }
      if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b0);
      }
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      _eh_vector_destructor_iterator_(local_88,0x10,2,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_118;
      return param_3;
    }
    local_108 = 0x42;
    plVar10 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f56f8);
    iVar5 = FUN_140e4a740(&local_168);
    if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar10, lVar1 != 0)) {
      if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar10 = (longlong *)0x0;
      }
      else {
        plVar10 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    local_d4 = 10;
    local_e0 = 0;
    iVar5 = FUN_140e851f0(plVar10,&local_e0,DAT_141955260,0);
    if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e0);
    }
    if (iVar5 != 0) {
LAB_140d44c40:
      bVar2 = false;
      goto LAB_140d448a0;
    }
    local_134 = local_15c;
    local_138 = local_160;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) == 0) {
      local_140 = local_168;
    }
    else {
      FUN_1400419b0(&local_140,&local_168);
    }
    local_158 = uVar13 | 4;
    local_c4 = 7;
    local_d0[0] = 10;
    FUN_140042560(&local_140,local_d0);
    if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d0);
    }
    if (param_4 < 1) {
      puVar8 = &DAT_1419df7b0;
    }
    else {
      puVar8 = (undefined8 *)*param_5;
    }
    iVar5 = FUN_140e851f0(puVar8,&local_140,DAT_141955260,1);
    local_158 = uVar13;
    if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_140);
    }
    if (iVar5 == -2 || 0 < iVar5) goto LAB_140d44c40;
    local_108 = 0x43;
    uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b40);
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f56f8);
    cVar3 = FUN_140e491e0(uVar9);
    if (cVar3 == '\0') {
      local_b4 = 10;
      local_c0 = 1;
      puVar11 = &local_c0;
      uVar13 = uVar13 | 2;
    }
    else {
      uStack_f4 = 10;
      local_100 = 2;
      puVar11 = &local_100;
      uVar13 = uVar13 | 1;
    }
    local_158 = uVar13;
    FUN_140e609c0(param_1);
    uVar7 = FUN_140e4a740(&local_168);
    puVar12 = (undefined8 *)FUN_140e48e40(puVar8,uVar7);
    FUN_140e609c0(*(undefined8 *)*puVar8);
    if (puVar11 != puVar12) {
      local_98 = *(undefined4 *)puVar11;
      uStack_94 = *(undefined4 *)((longlong)puVar11 + 4);
      uStack_90 = *(undefined4 *)(puVar11 + 1);
      uStack_8c = *(undefined4 *)((longlong)puVar11 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar12 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar12);
      }
      FUN_140041b80(puVar12,&local_98);
    }
    if (((uVar13 & 2) != 0) &&
       (uVar13 = uVar13 & 0xfffffffd, local_158 = uVar13,
       (1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_c0);
    }
    if (((uVar13 & 1) != 0) &&
       (uVar13 = uVar13 & 0xfffffffe, local_158 = uVar13,
       (1 << ((byte)uStack_f4 & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_100);
    }
    FUN_140e60910(2);
    local_108 = 0x44;
    cVar3 = FUN_140e491e0(uVar9);
    uVar7 = (undefined4)((ulonglong)pcVar14 >> 0x20);
    if (cVar3 == '\0') goto LAB_140d44c40;
    local_108 = 0x44;
    if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_150);
    }
    local_150 = 0;
    local_148 = 0;
    local_144 = 5;
    (**(code **)(*param_1 + 8))(param_1,DAT_141a57b40);
    local_f0 = &local_128;
    local_e8 = &local_168;
    pcVar14 = (code *)CONCAT44(uVar7,DAT_1419fe568);
    FUN_140e634e0(param_1,param_2,&local_150,2,pcVar14,&local_f0);
    bVar2 = false;
  } while( true );
}

