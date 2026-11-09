// gml_Script_scribble_font_get_default @ 0x14046bf70

undefined8 *
gml_Script_scribble_font_get_default
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  double *pdVar8;
  undefined8 *puVar9;
  double dVar10;
  double dVar11;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  undefined8 **ppuVar12;
  double **ppdVar13;
  double local_168;
  uint local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  double local_138;
  uint local_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  char *local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined8 *local_e0;
  undefined4 local_d4;
  double *local_d0 [2];
  undefined8 *local_c0;
  double local_b8 [4];
  undefined8 local_98;
  byte local_8c;
  undefined1 local_88 [16];
  longlong local_78;
  
  local_110 = "gml_Script_scribble_font_force_bilinear_filtering";
  local_118 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_118;
  local_108 = 6;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  _eh_vector_constructor_iterator_(local_b8,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_12c = 0xffffff;
  local_138 = 0.0;
  local_15c = 0xffffff;
  local_168 = 0.0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_d4 = 0xffffff;
  local_e0 = (undefined8 *)0x0;
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_14c = 0;
  local_158 = 0;
  local_f4 = 0;
  local_100 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_108 = 8;
  if (param_4 < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*param_5;
    if (puVar7 == &local_98) goto LAB_14046c0bd;
  }
  local_128 = *(undefined4 *)puVar7;
  uStack_124 = *(undefined4 *)((longlong)puVar7 + 4);
  uStack_120 = *(undefined4 *)(puVar7 + 1);
  uStack_11c = *(undefined4 *)((longlong)puVar7 + 0xc);
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_128);
LAB_14046c0bd:
  ppuVar12 = &local_c0;
  local_c0 = &local_98;
  uVar6 = FUN_1401effd0(local_res8,local_res10,&local_158,1,ppuVar12);
  iVar2 = FUN_140e63cb0(local_88,&local_res8,&local_res10,uVar6);
  if (0 < iVar2) {
    do {
      uVar3 = (undefined4)((ulonglong)ppuVar12 >> 0x20);
      local_108 = 10;
      uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a063e8);
      if (param_4 < 2) {
        puVar7 = &DAT_1419df7b0;
      }
      else {
        puVar7 = (undefined8 *)param_5[1];
      }
      iVar2 = FUN_140e851f0(uVar6,puVar7,DAT_141955260,0);
      if (iVar2 == 0) {
        local_108 = 10;
        goto LAB_14046c5eb;
      }
      local_108 = 0xb;
      puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a063e8);
      FUN_140e609c0(local_res8);
      if (param_4 < 2) {
        puVar9 = &DAT_1419df7b0;
      }
      else {
        puVar9 = (undefined8 *)param_5[1];
      }
      if (puVar9 != puVar7) {
        local_128 = *(undefined4 *)puVar9;
        uStack_124 = *(undefined4 *)((longlong)puVar9 + 4);
        uStack_120 = *(undefined4 *)(puVar9 + 1);
        uStack_11c = *(undefined4 *)((longlong)puVar9 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar7);
        }
        FUN_140041b80(puVar7,&local_128);
      }
      FUN_140e60910(1);
      local_108 = 0xd;
      pdVar8 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a06328);
      if (pdVar8 != &local_138) {
        local_128 = *(undefined4 *)pdVar8;
        uStack_124 = *(undefined4 *)((longlong)pdVar8 + 4);
        uStack_120 = *(undefined4 *)(pdVar8 + 1);
        uStack_11c = *(undefined4 *)((longlong)pdVar8 + 0xc);
        if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        FUN_140041b80(&local_138,&local_128);
      }
      local_108 = 0xe;
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      local_15c = 0;
      local_168 = 0.0;
      local_108 = 0xf;
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      local_158 = 0;
      local_150 = 0;
      local_14c = 5;
      local_d0[0] = &local_138;
      ppdVar13 = local_d0;
      ppuVar12 = (undefined8 **)CONCAT44(uVar3,DAT_141a064d8);
      pdVar8 = (double *)FUN_140e634e0(local_res8,local_res10,&local_158,1,ppuVar12,ppdVar13);
      if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
        dVar10 = *pdVar8;
      }
      else {
        dVar10 = (double)FUN_140e4b060(pdVar8);
      }
      iVar2 = (int)dVar10;
      if (0 < iVar2) {
        do {
          iVar2 = iVar2 + -1;
          local_108 = 0x11;
          if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_100);
          }
          local_100 = 0;
          local_f8 = 0;
          local_f4 = 5;
          dVar10 = local_168;
          if ((local_15c & 0xffffff) != 0) {
            dVar10 = (double)FUN_140e4b060(&local_168);
          }
          uVar3 = FUN_140e4a740(&local_138);
          puVar7 = (undefined8 *)FUN_140ea8b20(&local_100,uVar3,(longlong)dVar10,0xb);
          if (puVar7 != &local_148) {
            local_128 = *(undefined4 *)puVar7;
            uStack_124 = *(undefined4 *)((longlong)puVar7 + 4);
            uStack_120 = *(undefined4 *)(puVar7 + 1);
            uStack_11c = *(undefined4 *)((longlong)puVar7 + 0xc);
            if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_148);
            }
            FUN_140041b80(&local_148,&local_128);
          }
          local_108 = 0x12;
          if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_158);
          }
          local_158 = 0;
          local_150 = 0;
          local_14c = 5;
          FUN_140e87440(&local_148,DAT_141a06988,0x80000000,&local_e0,
                        (ulonglong)ppuVar12 & 0xffffffffffffff00,
                        (ulonglong)ppdVar13 & 0xffffffffffffff00);
          if (param_4 < 2) {
            pdVar8 = (double *)&DAT_1419df7b0;
LAB_14046c406:
            local_128 = *(undefined4 *)pdVar8;
            uStack_124 = *(undefined4 *)((longlong)pdVar8 + 4);
            uStack_120 = *(undefined4 *)(pdVar8 + 1);
            uStack_11c = *(undefined4 *)((longlong)pdVar8 + 0xc);
            if ((1 << ((byte)local_b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_b8);
            }
            FUN_140041b80(local_b8,&local_128);
          }
          else {
            pdVar8 = (double *)param_5[1];
            if (pdVar8 != local_b8) goto LAB_14046c406;
          }
          local_d0[0] = local_b8;
          switch(local_13c) {
          default:
switchD_14046c44f_caseD_1:
            uVar6 = 0;
            break;
          case 6:
            uVar6 = local_148;
            break;
          case 0xf:
            iVar4 = (int)((ulonglong)local_148 >> 0x20);
            if ((iVar4 != 0x1000000) && (iVar4 != 0x4000001)) goto switchD_14046c44f_caseD_1;
          case 0:
          case 7:
          case 10:
          case 0xd:
            uVar3 = FUN_140e4a8b0(&local_148);
            uVar6 = FUN_140e87250(uVar3);
          }
          ppdVar13 = local_d0;
          ppuVar12 = &local_e0;
          puVar7 = (undefined8 *)FUN_140e63610(uVar6,local_res10,&local_158,1,ppuVar12,ppdVar13);
          if (puVar7 != &local_f0) {
            local_128 = *(undefined4 *)puVar7;
            uStack_124 = *(undefined4 *)((longlong)puVar7 + 4);
            uStack_120 = *(undefined4 *)(puVar7 + 1);
            uStack_11c = *(undefined4 *)((longlong)puVar7 + 0xc);
            if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_f0);
            }
            FUN_140041b80(&local_f0,&local_128);
          }
          local_108 = 0x13;
          dVar10 = local_168;
          if ((local_15c & 0xffffff) != 0) {
            dVar10 = (double)FUN_140e4b060(&local_168);
          }
          dVar11 = local_138;
          if ((local_12c & 0xffffff) != 0) {
            dVar11 = (double)FUN_140e4b060(&local_138);
          }
          FUN_140ea8d00((longlong)dVar11,(longlong)dVar10,0xb);
          local_108 = 0x15;
          uVar5 = local_15c & 0xffffff;
          if (uVar5 == 0) {
LAB_14046c594:
            local_168 = local_168 + 1.0;
          }
          else {
            if (uVar5 == 1) {
              local_168 = (double)FUN_140e4b060(&local_168);
              local_15c = 0;
              goto LAB_14046c594;
            }
            if (uVar5 == 7) {
              local_168 = (double)CONCAT44(local_168._4_4_,local_168._0_4_ + 1);
            }
            else if (uVar5 == 10) {
              local_168 = (double)((longlong)local_168 + 1);
            }
            else {
              if (uVar5 == 0xd) {
                local_15c = 0;
                goto LAB_14046c594;
              }
              FUN_140042910(&DAT_14172c3d8,&local_168,&local_168);
            }
          }
        } while (0 < iVar2);
        param_3 = local_res18;
      }
      cVar1 = FUN_140e643f0(local_88,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_88,&local_res8,&local_res10);
LAB_14046c5eb:
  if (local_78 != 0) {
    FUN_140e4cd60();
    local_78 = 0;
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  _eh_vector_destructor_iterator_(local_b8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_118;
  return param_3;
}

