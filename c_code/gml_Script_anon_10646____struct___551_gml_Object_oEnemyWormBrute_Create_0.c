// gml_Script_anon_10646____struct___551_gml_Object_oEnemyWormBrute_Create_0 @ 0x140a9df70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_10646____struct___551_gml_Object_oEnemyWormBrute_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  double *pdVar11;
  double *pdVar12;
  double *pdVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  longlong *local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  longlong **pplVar17;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  double local_1d8;
  uint local_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  char *local_1a0;
  undefined4 local_198;
  longlong local_190;
  undefined4 local_184;
  longlong local_180;
  undefined4 local_174;
  undefined8 local_170;
  undefined4 local_164;
  undefined8 local_160;
  undefined4 local_154;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong local_138;
  byte local_12c;
  undefined1 local_128 [12];
  byte local_11c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined8 local_108;
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined8 local_e8;
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  longlong *local_c8;
  longlong *local_c0;
  undefined1 *local_b8;
  undefined8 *local_b0;
  undefined1 *local_a8;
  undefined8 *local_a0;
  undefined1 *local_98;
  undefined1 local_90 [16];
  longlong local_80;
  
  local_res18 = 0;
  local_1a0 = "gml_Script_anon@9811@___struct___551@gml_Object_oEnemyWormBrute_Create_0";
  local_1a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1a8;
  local_198 = 0x1ab;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_138,0x10,7,FUN_1400424d0,FUN_140041b30);
  local_154 = 0xffffff;
  local_160 = 0;
  local_164 = 0xffffff;
  local_170 = 0;
  local_174 = 0xffffff;
  local_180 = 0;
  local_184 = 0xffffff;
  local_190 = 0;
  uStack_13c = 0xffffff;
  local_148 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0.0;
  local_1bc = 0;
  local_1c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_198 = 0x1ac;
  uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57250);
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  local_154 = 0;
  local_160 = 0;
  FUN_140e87930(uVar7,DAT_141a0a848,0x80000000,&local_160);
  local_198 = 0x1ad;
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  local_164 = 0;
  local_170 = 0x3ff0000000000000;
  uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57250);
  FUN_140e87930(uVar7,DAT_1419f2478,0x80000000,&local_170);
  local_198 = 0x1af;
  uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f22c8);
  plVar8 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0fa78);
  iVar4 = FUN_140e4a740(uVar7);
  if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar8, lVar1 != 0)) {
    if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (plVar8 != &local_180) {
    local_1e8 = *plVar8;
    uStack_1e0 = (undefined4)plVar8[1];
    uStack_1dc = *(undefined4 *)((longlong)plVar8 + 0xc);
    if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_180);
    }
    FUN_140041b80(&local_180,&local_1e8);
  }
  local_198 = 0x1b0;
  plVar8 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0fa28);
  iVar4 = FUN_140e4a740(uVar7);
  if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar8, lVar1 != 0)) {
    if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (plVar8 != &local_190) {
    local_1e8 = *plVar8;
    uStack_1e0 = (undefined4)plVar8[1];
    uStack_1dc = *(undefined4 *)((longlong)plVar8 + 0xc);
    if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_190);
    }
    FUN_140041b80(&local_190,&local_1e8);
  }
  local_198 = 0x1b2;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  puVar9 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f24c8);
  puVar10 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a7d8);
  local_c8 = &local_180;
  local_c0 = &local_190;
  uStack_1dc = 0xf;
  local_1e8 = 0x100000000000077;
  local_1b8 = 0x100000000000077;
  uStack_1b0 = uStack_1e0;
  uStack_1ac = 0xf;
  if ((1 << ((byte)_local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_1b8);
  local_b8 = local_118;
  if (puVar9 != &local_108) {
    local_1e8 = *puVar9;
    uStack_1e0 = *(undefined4 *)(puVar9 + 1);
    uStack_1dc = *(undefined4 *)((longlong)puVar9 + 0xc);
    if ((1 << ((byte)_local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_1e8);
  }
  local_b0 = &local_108;
  local_1e8 = CONCAT44(uRam00000001419eb2b4,_DAT_1419eb2b0);
  uStack_1e0 = uRam00000001419eb2b8;
  uStack_1dc = uRam00000001419eb2bc;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_1e8);
  local_a8 = local_f8;
  if (puVar10 != &local_e8) {
    local_1e8 = *puVar10;
    uStack_1e0 = *(undefined4 *)(puVar10 + 1);
    uStack_1dc = *(undefined4 *)((longlong)puVar10 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_1e8);
  }
  local_a0 = &local_e8;
  local_1e8 = CONCAT44(uRam0000000141dd90ac,_DAT_141dd90a8);
  uStack_1e0 = uRam0000000141dd90b0;
  uStack_1dc = DAT_141dd90b4;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_1e8);
  local_98 = local_d8;
  pplVar17 = &local_c8;
  uVar7 = FUN_140265f80(local_res8,local_res10,&local_1c8,7,pplVar17);
  iVar4 = FUN_140e63cb0(local_90,&local_res8,&local_res10,uVar7);
  if (0 < iVar4) {
    do {
      (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f22c8);
      local_198 = 0x1b4;
      (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f22c8);
      pdVar11 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f290);
      pdVar12 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1eed0);
      pdVar13 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
      if ((*(uint *)((longlong)pdVar12 + 0xc) & 0xffffff) == 0) {
        dVar15 = *pdVar12;
      }
      else {
        dVar15 = (double)FUN_140e4b060(pdVar12);
      }
      if ((*(uint *)((longlong)pdVar11 + 0xc) & 0xffffff) == 0) {
        dVar16 = *pdVar11;
      }
      else {
        dVar16 = (double)FUN_140e4b060(pdVar11);
      }
      fVar14 = (float)FUN_140e78f90((float)dVar16,(float)dVar15);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar13 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar13);
      }
      *(undefined4 *)((longlong)pdVar13 + 0xc) = 0;
      *pdVar13 = (double)fVar14;
      local_198 = 0x1b5;
      pdVar13 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
      if ((*(uint *)((longlong)pdVar12 + 0xc) & 0xffffff) == 0) {
        dVar15 = *pdVar12;
      }
      else {
        dVar15 = (double)FUN_140e4b060(pdVar12);
      }
      if ((*(uint *)((longlong)pdVar11 + 0xc) & 0xffffff) == 0) {
        dVar16 = *pdVar11;
      }
      else {
        dVar16 = (double)FUN_140e4b060(pdVar11);
      }
      fVar14 = (float)FUN_140e79010((float)dVar16,(float)dVar15);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar13 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar13);
      }
      *(undefined4 *)((longlong)pdVar13 + 0xc) = 0;
      *pdVar13 = (double)fVar14;
      local_198 = 0x1b6;
      puVar10 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f0d0);
      uStack_1ac = 6;
      local_1b8 = local_res10;
      pplVar17 = (longlong **)((ulonglong)pplVar17 & 0xffffffffffffff00);
      FUN_140e87440(&local_1b8,DAT_141a0a828,0x80000000,&local_148,pplVar17,0);
      if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      FUN_140e609c0(local_res8);
      if (&local_148 != puVar10) {
        local_1e8 = local_148;
        uStack_1e0 = uStack_140;
        uStack_1dc = uStack_13c;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar10);
        }
        FUN_140041b80(puVar10,&local_1e8);
      }
      FUN_140e60910(1);
      cVar3 = FUN_140e643f0(local_90,&local_res8,&local_res10);
    } while (cVar3 != '\0');
  }
  FUN_140e63970(local_90,&local_res8,&local_res10);
  local_198 = 0x1b9;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  local_1e8 = CONCAT44(uRam00000001419eb2a4,_DAT_1419eb2a0);
  uStack_1e0 = uRam00000001419eb2a8;
  uStack_1dc = uRam00000001419eb2ac;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_1e8);
  local_c8 = &local_138;
  local_1e8 = CONCAT44(uRam00000001419eb2b4,_DAT_1419eb2b0);
  uStack_1e0 = uRam00000001419eb2b8;
  uStack_1dc = uRam00000001419eb2bc;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_1e8);
  local_c0 = (longlong *)local_128;
  uStack_1ac = *(undefined4 *)((longlong)puVar9 + 0xc);
  uStack_1b0 = *(undefined4 *)(puVar9 + 1);
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) == 0) {
    local_1b8 = *puVar9;
  }
  else {
    FUN_1400419b0(&local_1b8,puVar9);
  }
  local_res18 = 1;
  uStack_1dc = 7;
  local_1e8 = CONCAT44(local_1e8._4_4_,0xb4);
  FUN_1400460e0(&local_1b8,&local_1e8);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = local_1b8;
  uStack_1e0 = uStack_1b0;
  uStack_1dc = uStack_1ac;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_1e8);
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1e8 = CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
  uStack_1e0 = uRam00000001419df7c8;
  uStack_1dc = uRam00000001419df7cc;
  local_b8 = local_118;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_1e8);
  local_b0 = &local_108;
  FUN_14044e5b0(local_res8,local_res10,&local_1c8,4,&local_c8);
  local_198 = 0x1bb;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1cc = 0;
  local_1d8 = 0.0;
  bVar2 = true;
  do {
    if (!bVar2) {
      local_198 = 0x1bb;
      (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f24c8);
      uVar5 = local_1cc & 0xffffff;
      if (uVar5 != 0) {
        if (uVar5 != 1) {
          if (uVar5 == 7) {
            local_1d8 = (double)CONCAT44(local_1d8._4_4_,local_1d8._0_4_ + 1);
          }
          else if (uVar5 == 10) {
            local_1d8 = (double)((longlong)local_1d8 + 1);
          }
          else {
            if (uVar5 == 0xd) {
              local_1cc = 0;
              goto LAB_140a9e95d;
            }
            FUN_140042910(&DAT_14172c3d8,&local_1d8,&local_1d8);
          }
          goto LAB_140a9e967;
        }
        local_1d8 = (double)FUN_140e4b060(&local_1d8);
        local_1cc = 0;
      }
LAB_140a9e95d:
      local_1d8 = local_1d8 + 1.0;
    }
LAB_140a9e967:
    bVar2 = false;
    uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f22c8);
    iVar4 = FUN_140e851f0(&local_1d8,uVar7,DAT_141955260,1);
    if ((iVar4 == -2) || (-1 < iVar4)) {
      if (local_80 != 0) {
        FUN_140e4cd60();
        local_80 = 0;
      }
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_190);
      }
      if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_180);
      }
      if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_170);
      }
      if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_160);
      }
      _eh_vector_destructor_iterator_(&local_138,0x10,7,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_1a8;
      return param_3;
    }
    local_198 = 0x1bc;
    puVar9 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f2538);
    FUN_140e609c0(local_res8);
    uVar6 = FUN_140e4a740(&local_1d8);
    puVar10 = (undefined8 *)FUN_140e48e40(puVar9,uVar6);
    FUN_140e609c0(*(undefined8 *)*puVar9);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar10);
    }
    *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
    *puVar10 = 0x3ff0000000000000;
    FUN_140e60910(2);
  } while( true );
}

