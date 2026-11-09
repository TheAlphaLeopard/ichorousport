// gml_Script___InputPartySystem @ 0x1400bde20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Script___InputPartySystem(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  double *pdVar6;
  ulonglong uVar7;
  double dVar8;
  double **ppdVar9;
  undefined4 uVar10;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  double local_1d8;
  uint local_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  char *local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  double local_190;
  undefined4 local_184;
  undefined8 local_178;
  undefined8 uStack_170;
  double *local_168;
  double *local_160;
  double *local_158;
  double *local_150;
  undefined1 *local_148;
  undefined8 local_130;
  undefined4 local_124;
  double local_118;
  undefined4 local_10c;
  double local_108;
  undefined4 local_fc;
  double local_f8;
  undefined4 local_ec;
  undefined1 local_d8 [12];
  undefined4 local_cc;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined1 *local_78;
  double dStack_70;
  undefined1 *local_68;
  undefined4 local_5c;
  
  local_1b0 = "gml_Script_anon@715@anon@610@__InputPartySystem@__InputPartySystem";
  local_1b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1b8;
  local_1a8 = 0x18;
  _eh_vector_constructor_iterator_(&local_118,0x10,7,FUN_1400424d0,FUN_140041b30);
  local_1cc = 0xffffff;
  local_1d8 = 0.0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_184 = 0xffffff;
  local_190 = 0.0;
  local_1dc = 0;
  local_1e8 = 0;
  local_194 = 0;
  local_1a0 = 0;
  local_8c = 0;
  local_98 = 0;
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1a8 = 0x1a;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a02258);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') {
    local_1a8 = 0x1a;
    goto LAB_1400bf249;
  }
  local_1a8 = 0x1c;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a02228);
  iVar2 = FUN_140e851f0(uVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_1a8 = 0x1e;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1e8 = 0;
    local_1e0 = 0;
    local_1dc = 5;
    local_178 = (undefined1 *)CONCAT44(uRam0000000141dcb00c,_DAT_141dcb008);
    uStack_170 = (double)CONCAT44(DAT_141dcb014,uRam0000000141dcb010);
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_178);
    local_168 = &local_118;
    gml_Script_InputPlugInExists(param_1,param_2,&local_1e8,1,&local_168);
  }
  local_1a8 = 0x22;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1cc = 0;
  local_1d8 = 0.0;
  local_1a8 = 0x25;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 5;
  local_168 = &local_1d8;
  uVar5 = gml_Script_InputPlayerLowestConnectedIndex(param_1,param_2,&local_1e8,1,&local_168);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') {
    local_1a8 = 0x27;
    if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a0);
    }
    local_1a0 = 0;
    local_198 = 0;
    local_194 = 5;
    local_178 = (undefined1 *)CONCAT44(uRam00000001419e1924,_DAT_1419e1920);
    uStack_170 = (double)CONCAT44(uRam00000001419e192c,uRam00000001419e1928);
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_178);
    local_160 = &local_108;
    local_158 = &local_1d8;
    FUN_14034f100(param_1,param_2,&local_1a0,2,&local_160);
  }
  local_1a8 = 0x2a;
  uVar3 = local_1cc & 0xffffff;
  if (uVar3 == 0) {
LAB_1400be196:
    local_1d8 = local_1d8 + 1.0;
  }
  else {
    if (uVar3 == 1) {
      local_1d8 = (double)FUN_140e4b060(&local_1d8);
      local_1cc = 0;
      goto LAB_1400be196;
    }
    if (uVar3 == 7) {
      local_1d8 = (double)CONCAT44(local_1d8._4_4_,local_1d8._0_4_ + 1);
    }
    else if (uVar3 == 10) {
      local_1d8 = (double)((longlong)local_1d8 + 1);
    }
    else {
      if (uVar3 == 0xd) {
        local_1cc = 0;
        goto LAB_1400be196;
      }
      FUN_140042910(&DAT_14172c3d8,&local_1d8,&local_1d8);
    }
  }
  local_1a8 = 0x2d;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a02158);
  cVar1 = FUN_140e491e0(uVar5);
  while (cVar1 != '\0') {
    local_1a8 = 0x32;
    uStack_170 = (double)CONCAT44(0xd,SUB84(uStack_170,0));
    local_178 = (undefined1 *)0x0;
    local_78 = (undefined1 *)0x0;
    dStack_70 = uStack_170;
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_78);
    local_1a8 = 0x33;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_1cc = 0;
    local_1d8 = 0.0;
    local_1a8 = 0x34;
    cVar1 = FUN_140e491e0(&local_88);
  }
  local_1a8 = 0x44;
  pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a021c8);
  if (pdVar6 != &local_1d8) {
    local_178 = (undefined1 *)*pdVar6;
    uStack_170 = pdVar6[1];
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_178);
  }
  local_1a8 = 0x45;
  local_124 = 0;
  local_130 = 0x3ff0000000000000;
  FUN_1400462a0(&local_130,pdVar6);
  iVar2 = FUN_140e4a740(&local_130);
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  while (0 < iVar2) {
    iVar2 = iVar2 + -1;
    local_1a8 = 0x47;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1e8 = 0;
    local_1e0 = 0;
    local_1dc = 5;
    pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a021c8);
    local_178 = (undefined1 *)CONCAT44(uRam00000001419e1924,_DAT_1419e1920);
    uStack_170 = (double)CONCAT44(uRam00000001419e192c,uRam00000001419e1928);
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_178);
    local_160 = &local_1d8;
    local_168 = &local_118;
    FUN_14034f100(param_1,param_2,&local_1e8,2,&local_168);
    local_1a8 = 0x48;
    uVar3 = local_1cc & 0xffffff;
    if (uVar3 == 0) {
LAB_1400be443:
      local_1d8 = local_1d8 + 1.0;
    }
    else {
      if (uVar3 == 1) {
        local_1d8 = (double)FUN_140e4b060(&local_1d8);
        local_1cc = 0;
        goto LAB_1400be443;
      }
      if (uVar3 == 7) {
        local_1d8 = (double)CONCAT44(local_1d8._4_4_,local_1d8._0_4_ + 1);
      }
      else if (uVar3 == 10) {
        local_1d8 = (double)((longlong)local_1d8 + 1);
      }
      else {
        if (uVar3 == 0xd) {
          local_1cc = 0;
          goto LAB_1400be443;
        }
        FUN_140042910(&DAT_14172c3d8,&local_1d8,&local_1d8);
      }
    }
  }
  local_1a8 = 0x4c;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1cc = 0;
  local_1d8 = 0.0;
  local_1a8 = 0x4d;
  if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
    dVar8 = *pdVar6;
  }
  else {
    dVar8 = (double)FUN_140e4b060(pdVar6);
  }
  uVar7 = (ulonglong)dVar8;
  uVar3 = (uint)uVar7;
  while (0 < (int)uVar3) {
    uVar3 = (int)uVar7 - 1;
    uVar7 = (ulonglong)uVar3;
    local_1a8 = 0x4f;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1e8 = 0;
    local_1e0 = 0;
    local_1dc = 5;
    (**(code **)(*param_1 + 8))(param_1,DAT_141a021c8);
    local_168 = &local_1d8;
    ppdVar9 = &local_168;
    uVar5 = gml_Script_InputPlayerLowestConnectedIndex(param_1,param_2,&local_1e8,1,ppdVar9);
    uVar10 = (undefined4)((ulonglong)ppdVar9 >> 0x20);
    cVar1 = FUN_140e491e0(uVar5);
    if (cVar1 == '\0') {
      local_1a8 = 0x51;
      if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a0);
      }
      local_1a0 = 0;
      local_198 = 0;
      local_194 = 5;
      pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a02168);
      if (pdVar6 != &local_108) {
        local_1c8 = *(undefined4 *)pdVar6;
        uStack_1c4 = *(undefined4 *)((longlong)pdVar6 + 4);
        uStack_1c0 = *(undefined4 *)(pdVar6 + 1);
        uStack_1bc = *(undefined4 *)((longlong)pdVar6 + 0xc);
        if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        FUN_140041b80(&local_108,&local_1c8);
      }
      local_160 = &local_108;
      uVar5 = FUN_140e634e0(param_1,param_2,&local_1a0,1,CONCAT44(uVar10,DAT_141a02278),&local_160);
      cVar1 = FUN_140e491e0(uVar5);
      if (cVar1 != '\0') {
        if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_98);
        }
        local_98 = 0;
        local_90 = 0;
        local_8c = 5;
        uVar5 = gml_Script_InputPlayerGetBlocked(param_1,param_2,&local_98,0,0);
        local_124 = 0;
        local_130 = 0;
        iVar2 = FUN_140e851f0(uVar5,&local_130,DAT_141955260,1);
        if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_130);
        }
        if (iVar2 != -2 && iVar2 < 1) {
          local_1a8 = 0x53;
          if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_a8);
          }
          local_a8 = 0;
          local_a0 = 0;
          local_9c = 5;
          pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a02128);
          if (pdVar6 != &local_f8) {
            local_1c8 = *(undefined4 *)pdVar6;
            uStack_1c4 = *(undefined4 *)((longlong)pdVar6 + 4);
            uStack_1c0 = *(undefined4 *)(pdVar6 + 1);
            uStack_1bc = *(undefined4 *)((longlong)pdVar6 + 0xc);
            if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_f8);
            }
            FUN_140041b80(&local_f8,&local_1c8);
          }
          local_158 = &local_f8;
          local_150 = &local_1d8;
          pdVar6 = (double *)gml_Script_InputDeviceGetPlayer(param_1,param_2,&local_a8,2,&local_158)
          ;
          if (pdVar6 != &local_190) {
            local_1c8 = *(undefined4 *)pdVar6;
            uStack_1c4 = *(undefined4 *)((longlong)pdVar6 + 4);
            uStack_1c0 = *(undefined4 *)(pdVar6 + 1);
            uStack_1bc = *(undefined4 *)((longlong)pdVar6 + 0xc);
            if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_190);
            }
            FUN_140041b80(&local_190,&local_1c8);
          }
          local_1a8 = 0x54;
          local_5c = 0;
          local_68 = &DAT_bff0000000000000;
          iVar2 = FUN_140e851f0(&local_190,&local_68,DAT_141955260,0);
          if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_68);
          }
          if (iVar2 != 0) {
            local_1a8 = 0x56;
            if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1e8);
            }
            local_1e8 = 0;
            local_1e0 = 0;
            local_1dc = 5;
            local_1c8 = _DAT_141dcafe8;
            uStack_1c4 = uRam0000000141dcafec;
            uStack_1c0 = uRam0000000141dcaff0;
            uStack_1bc = DAT_141dcaff4;
            if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_118);
            }
            FUN_140041b80(&local_118,&local_1c8);
            local_160 = &local_1d8;
            local_1c8 = _DAT_141dcaf78;
            uStack_1c4 = uRam0000000141dcaf7c;
            uStack_1c0 = uRam0000000141dcaf80;
            uStack_1bc = DAT_141dcaf84;
            local_168 = &local_118;
            if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_f8);
            }
            FUN_140041b80(&local_f8,&local_1c8);
            local_158 = &local_f8;
            local_150 = &local_190;
            gml_Script___ApplyPS5_anon_427___InputTrggerEffectClassFeedback___InputTrggerEffectClassFeedback
                      (param_1,param_2,&local_1e8,4,&local_168);
            local_1a8 = 0x58;
            if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1e8);
            }
            local_1e8 = 0;
            local_1e0 = 0;
            local_1dc = 5;
            pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a02198);
            local_1c8 = _DAT_1419df7a0;
            uStack_1c4 = uRam00000001419df7a4;
            uStack_1c0 = uRam00000001419df7a8;
            uStack_1bc = uRam00000001419df7ac;
            if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_118);
            }
            FUN_140041b80(&local_118,&local_1c8);
            local_168 = &local_118;
            if (pdVar6 != &local_108) {
              local_1c8 = *(undefined4 *)pdVar6;
              uStack_1c4 = *(undefined4 *)((longlong)pdVar6 + 4);
              uStack_1c0 = *(undefined4 *)(pdVar6 + 1);
              uStack_1bc = *(undefined4 *)((longlong)pdVar6 + 0xc);
              if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_108);
              }
              FUN_140041b80(&local_108,&local_1c8);
            }
            local_160 = &local_108;
            gml_Script_InputPartySetParams(param_1,param_2,&local_1e8,2,&local_168);
            local_1a8 = 0x59;
            if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1e8);
            }
            local_1e8 = 0;
            local_1e0 = 0;
            local_1dc = 5;
            local_168 = &local_190;
            local_160 = &local_1d8;
            FUN_14034f100(param_1,param_2,&local_1e8,2,&local_168);
            local_1a8 = 0x5a;
            if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1e8);
            }
            local_1e8 = 0;
            local_1e0 = 0;
            local_1dc = 5;
            local_168 = &local_1d8;
            gml_Script__system_anon_145_InputVerbCount_InputVerbCount
                      (param_1,param_2,&local_1e8,1,&local_168);
            local_1a8 = 0x5c;
            if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1e8);
            }
            local_1e8 = 0;
            local_1e0 = 0;
            local_1dc = 5;
            uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a02168);
            FUN_140e63610(param_1,param_2,&local_1e8,0,uVar5,0);
            local_1a8 = 0x5e;
            goto LAB_1400bf249;
          }
        }
      }
      local_1a8 = 0x62;
      uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a02228);
      dStack_70 = (double)((ulonglong)dStack_70 & 0xffffffff);
      local_78 = &DAT_bff0000000000000;
      iVar2 = FUN_140e851f0(uVar5,&local_78,DAT_141955260,0);
      if ((1 << ((byte)((ulonglong)dStack_70 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      uVar4 = 1 << ((byte)local_1dc & 0x1f);
      if (iVar2 == 0) {
        local_1a8 = 100;
        if ((uVar4 & 0x46) != 0) {
          FUN_140041a50(&local_1e8);
        }
        local_1e8 = 0;
        local_1e0 = 0;
        local_1dc = 5;
        pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a02128);
        if (pdVar6 != &local_118) {
          local_1c8 = *(undefined4 *)pdVar6;
          uStack_1c4 = *(undefined4 *)((longlong)pdVar6 + 4);
          uStack_1c0 = *(undefined4 *)(pdVar6 + 1);
          uStack_1bc = *(undefined4 *)((longlong)pdVar6 + 0xc);
          if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_118);
          }
          FUN_140041b80(&local_118,&local_1c8);
        }
        local_160 = &local_1d8;
        local_168 = &local_118;
        pdVar6 = (double *)
                 gml_Script___InputPartyDeviceIsActive(param_1,param_2,&local_1e8,2,&local_168);
      }
      else {
        local_1a8 = 0x68;
        if ((uVar4 & 0x46) != 0) {
          FUN_140041a50(&local_1e8);
        }
        local_1e8 = 0;
        local_1e0 = 0;
        local_1dc = 5;
        pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a02228);
        if (pdVar6 != &local_118) {
          local_1c8 = *(undefined4 *)pdVar6;
          uStack_1c4 = *(undefined4 *)((longlong)pdVar6 + 4);
          uStack_1c0 = *(undefined4 *)(pdVar6 + 1);
          uStack_1bc = *(undefined4 *)((longlong)pdVar6 + 0xc);
          if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_118);
          }
          FUN_140041b80(&local_118,&local_1c8);
        }
        local_160 = &local_1d8;
        local_168 = &local_118;
        pdVar6 = (double *)gml_Script_InputDeviceGetPlayer(param_1,param_2,&local_1e8,2,&local_168);
      }
      if (pdVar6 != &local_190) {
        local_1c8 = *(undefined4 *)pdVar6;
        uStack_1c4 = *(undefined4 *)((longlong)pdVar6 + 4);
        uStack_1c0 = *(undefined4 *)(pdVar6 + 1);
        uStack_1bc = *(undefined4 *)((longlong)pdVar6 + 0xc);
        if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_190);
        }
        FUN_140041b80(&local_190,&local_1c8);
      }
      local_1a8 = 0x6b;
      uStack_170 = (double)((ulonglong)uStack_170 & 0xffffffff);
      local_178 = &DAT_bff0000000000000;
      iVar2 = FUN_140e851f0(&local_190,&local_178,DAT_141955260,0);
      if ((1 << ((byte)((ulonglong)uStack_170 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      if (iVar2 != 0) {
        local_1a8 = 0x6d;
        if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        local_1e8 = 0;
        local_1e0 = 0;
        local_1dc = 5;
        local_1c8 = _DAT_141dcafe8;
        uStack_1c4 = uRam0000000141dcafec;
        uStack_1c0 = uRam0000000141dcaff0;
        uStack_1bc = DAT_141dcaff4;
        if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        FUN_140041b80(&local_118,&local_1c8);
        local_160 = &local_1d8;
        local_1c8 = _DAT_141dcafa8;
        uStack_1c4 = uRam0000000141dcafac;
        uStack_1c0 = uRam0000000141dcafb0;
        uStack_1bc = DAT_141dcafb4;
        local_168 = &local_118;
        if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        FUN_140041b80(&local_f8,&local_1c8);
        local_158 = &local_f8;
        local_150 = &local_190;
        gml_Script___ApplyPS5_anon_427___InputTrggerEffectClassFeedback___InputTrggerEffectClassFeedback
                  (param_1,param_2,&local_1e8,4,&local_168);
        local_1a8 = 0x6e;
        if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        local_1e8 = 0;
        local_1e0 = 0;
        local_1dc = 5;
        local_168 = &local_190;
        local_160 = &local_1d8;
        FUN_14034f100(param_1,param_2,&local_1e8,2,&local_168);
        local_1a8 = 0x6f;
        if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        local_1e8 = 0;
        local_1e0 = 0;
        local_1dc = 5;
        local_168 = &local_1d8;
        gml_Script__system_anon_145_InputVerbCount_InputVerbCount
                  (param_1,param_2,&local_1e8,1,&local_168);
      }
    }
    local_1a8 = 0x73;
    uVar4 = local_1cc & 0xffffff;
    if (uVar4 == 0) {
LAB_1400bec08:
      local_1d8 = local_1d8 + 1.0;
    }
    else {
      if (uVar4 == 1) {
        local_1d8 = (double)FUN_140e4b060(&local_1d8);
        local_1cc = 0;
        goto LAB_1400bec08;
      }
      if (uVar4 == 7) {
        local_1d8 = (double)CONCAT44(local_1d8._4_4_,local_1d8._0_4_ + 1);
      }
      else if (uVar4 == 10) {
        local_1d8 = (double)((longlong)local_1d8 + 1);
      }
      else {
        if (uVar4 == 0xd) {
          local_1cc = 0;
          goto LAB_1400bec08;
        }
        FUN_140042910(&DAT_14172c3d8,&local_1d8,&local_1d8);
      }
    }
  }
  local_1a8 = 0x76;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a02128);
  iVar2 = FUN_140e851f0(uVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 != 0) {
    local_1a8 = 0x79;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_1cc = 0;
    local_1d8 = 0.0;
    local_1a8 = 0x7a;
    pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a021c8);
    if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
      dVar8 = *pdVar6;
    }
    else {
      dVar8 = (double)FUN_140e4b060(pdVar6);
    }
    uVar7 = (ulonglong)dVar8;
    uVar3 = (uint)uVar7;
    while (0 < (int)uVar3) {
      uVar3 = (int)uVar7 - 1;
      uVar7 = (ulonglong)uVar3;
      local_1a8 = 0x7c;
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      local_1e8 = 0;
      local_1e0 = 0;
      local_1dc = 5;
      pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a02128);
      if (pdVar6 != &local_118) {
        local_1c8 = *(undefined4 *)pdVar6;
        uStack_1c4 = *(undefined4 *)((longlong)pdVar6 + 4);
        uStack_1c0 = *(undefined4 *)(pdVar6 + 1);
        uStack_1bc = *(undefined4 *)((longlong)pdVar6 + 0xc);
        if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        FUN_140041b80(&local_118,&local_1c8);
      }
      local_160 = &local_1d8;
      local_168 = &local_118;
      uVar5 = gml_Script_InputPressedMany(param_1,param_2,&local_1e8,2,&local_168);
      cVar1 = FUN_140e491e0(uVar5);
      if (cVar1 != '\0') {
        local_1a8 = 0x7e;
        if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a0);
        }
        local_1a0 = 0;
        local_198 = 0;
        local_194 = 5;
        local_1c8 = _DAT_141dcafe8;
        uStack_1c4 = uRam0000000141dcafec;
        uStack_1c0 = uRam0000000141dcaff0;
        uStack_1bc = DAT_141dcaff4;
        if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        FUN_140041b80(&local_f8,&local_1c8);
        local_158 = &local_f8;
        local_150 = &local_1d8;
        local_1c8 = _DAT_141dcb028;
        uStack_1c4 = uRam0000000141dcb02c;
        uStack_1c0 = uRam0000000141dcb030;
        uStack_1bc = DAT_141dcb034;
        if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_d8);
        }
        FUN_140041b80(local_d8,&local_1c8);
        local_148 = local_d8;
        gml_Script___ApplyPS5_anon_427___InputTrggerEffectClassFeedback___InputTrggerEffectClassFeedback
                  (param_1,param_2,&local_1a0,3,&local_158);
        local_1a8 = 0x7f;
        if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        local_1e8 = 0;
        local_1e0 = 0;
        local_1dc = 5;
        local_1c8 = _DAT_1419e1920;
        uStack_1c4 = uRam00000001419e1924;
        uStack_1c0 = uRam00000001419e1928;
        uStack_1bc = uRam00000001419e192c;
        if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        FUN_140041b80(&local_118,&local_1c8);
        local_160 = &local_1d8;
        local_168 = &local_118;
        FUN_14034f100(param_1,param_2,&local_1e8,2,&local_168);
      }
      local_1a8 = 0x82;
      uVar4 = local_1cc & 0xffffff;
      if (uVar4 == 0) {
LAB_1400bf230:
        local_1d8 = local_1d8 + 1.0;
      }
      else {
        if (uVar4 == 1) {
          local_1d8 = (double)FUN_140e4b060(&local_1d8);
          local_1cc = 0;
          goto LAB_1400bf230;
        }
        if (uVar4 == 7) {
          local_1d8 = (double)CONCAT44(local_1d8._4_4_,local_1d8._0_4_ + 1);
        }
        else if (uVar4 == 10) {
          local_1d8 = (double)((longlong)local_1d8 + 1);
        }
        else {
          if (uVar4 == 0xd) {
            local_1cc = 0;
            goto LAB_1400bf230;
          }
          FUN_140042910(&DAT_14172c3d8,&local_1d8,&local_1d8);
        }
      }
    }
  }
LAB_1400bf249:
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a0);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  _eh_vector_destructor_iterator_(&local_118,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1b8;
  return param_3;
}

