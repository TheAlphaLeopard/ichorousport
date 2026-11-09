// gml_Script_InputGameHasFocus @ 0x1403295b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputGameHasFocus
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 **ppuVar14;
  undefined8 **ppuVar15;
  ulonglong uVar16;
  undefined8 **ppuVar17;
  ulonglong uVar18;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  byte local_14c;
  undefined8 local_148;
  byte local_13c;
  undefined8 local_138;
  byte local_12c;
  undefined8 local_128;
  byte local_11c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined1 *local_98;
  undefined8 local_90;
  undefined4 local_84;
  uint local_80 [2];
  undefined8 *local_78;
  undefined1 local_70 [16];
  longlong local_60;
  
  ppuVar15 = &local_b8;
  local_100 = "gml_Script_InputDuration";
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  local_f8 = 10;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_140041df0(local_80,param_4,2,param_5);
  uVar5 = 1;
  _eh_vector_constructor_iterator_(&local_158,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_84 = 0xffffff;
  local_90 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_16c = 0;
  local_178 = 0;
  local_15c = 0;
  local_168 = 0;
  local_e4 = 0;
  local_f0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde238) &&
     (_Init_thread_header(&DAT_141dde238), DAT_141dde238 == -1)) {
    DAT_141dde240 = (longlong *)FUN_140e63aa0(DAT_1419f1378);
    _Init_thread_footer(&DAT_141dde238);
  }
  local_f8 = 10;
  puVar13 = &DAT_1419df7b0;
  uVar12 = (ulonglong)local_80[0];
  if ((int)local_80[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_78[1];
  }
  iVar3 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_f8 = 10;
    if ((int)local_80[0] < 2) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)local_78[1];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    *puVar6 = 0;
  }
  if (DAT_141ddc0e2 == '\0') {
    FUN_140e64380(DAT_141dde240,"gml_Script_InputDuration");
    FUN_140e64380(local_res8,"gml_Script_InputDuration");
  }
  local_f8 = 0xc;
  if (DAT_141ddc0e2 == '\0') {
    DAT_141ddc0e2 = '\x01';
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    puVar6 = (undefined8 *)(**(code **)(*DAT_141dde240 + 0x10))(DAT_141dde240,DAT_1419fcb48);
    FUN_140e609c0(DAT_141dde240);
    puVar7 = (undefined8 *)
             gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                       (local_res8,local_res10,&local_178,0,0);
    if (puVar7 != puVar6) {
      local_188 = *puVar7;
      uStack_180 = *(undefined4 *)(puVar7 + 1);
      uStack_17c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_188);
    }
    FUN_140e60910(1);
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    puVar6 = (undefined8 *)(**(code **)(*DAT_141dde240 + 0x10))(DAT_141dde240,DAT_141a026b8);
    FUN_140e609c0(DAT_141dde240);
    uVar5 = 0;
    puVar7 = (undefined8 *)gml_Script___InputTrace(local_res8,local_res10,&local_168,0,0);
    if (puVar7 != puVar6) {
      local_188 = *puVar7;
      uStack_180 = *(undefined4 *)(puVar7 + 1);
      uStack_17c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_188);
    }
    FUN_140e60910(1);
  }
  local_f8 = 4;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  if ((int)local_80[0] < 2) {
    puVar6 = &DAT_1419df7b0;
LAB_14032993e:
    local_188 = *puVar6;
    uStack_180 = *(undefined4 *)(puVar6 + 1);
    uStack_17c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_188);
  }
  else {
    puVar6 = (undefined8 *)local_78[1];
    if (puVar6 != &local_158) goto LAB_14032993e;
  }
  local_b8 = &local_158;
  ppuVar14 = (undefined8 **)CONCAT44(uVar5,DAT_141a014a8);
  ppuVar17 = ppuVar15;
  uVar8 = FUN_140e634e0(local_res8,local_res10,&local_178,1,ppuVar14,ppuVar15);
  cVar2 = FUN_140e491e0(uVar8);
  if (cVar2 == '\0') {
    local_f8 = 5;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    uVar5 = (undefined4)((ulonglong)ppuVar14 >> 0x20);
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f0);
    }
    local_f0 = 0;
    local_e8 = 0;
    local_e4 = 5;
    if ((int)local_80[0] < 2) {
      puVar6 = &DAT_1419df7b0;
LAB_140329a30:
      local_188 = *puVar6;
      uStack_180 = *(undefined4 *)(puVar6 + 1);
      uStack_17c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_188);
    }
    else {
      puVar6 = (undefined8 *)local_78[1];
      if (puVar6 != &local_148) goto LAB_140329a30;
    }
    local_b0 = &local_148;
    local_188 = CONCAT44(uRam0000000141dd039c,_DAT_141dd0398);
    uStack_180 = uRam0000000141dd03a0;
    uStack_17c = DAT_141dd03a4;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_188);
    local_a8 = &local_138;
    ppuVar17 = &local_b0;
    puVar6 = (undefined8 *)
             FUN_140e634e0(local_res8,local_res10,&local_f0,1,CONCAT44(uVar5,DAT_1419fdc58),ppuVar17
                          );
    if (puVar6 != &local_128) {
      local_188 = *puVar6;
      uStack_180 = *(undefined4 *)(puVar6 + 1);
      uStack_17c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_188);
    }
    local_a0 = &local_128;
    local_188 = CONCAT44(uRam0000000141dd036c,_DAT_141dd0368);
    uStack_180 = uRam0000000141dd0370;
    uStack_17c = DAT_141dd0374;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_188);
    local_98 = local_118;
    ppuVar14 = &local_a8;
    FUN_14008e020(local_res8,local_res10,&local_168,3,ppuVar14);
  }
  local_f8 = 0xc;
  if ((int)local_80[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_78[1];
  }
  uStack_17c = 0;
  local_188 = 0x3ff0000000000000;
  uVar4 = FUN_140e851f0(puVar6,&local_188,DAT_141955260,1);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if (uVar4 < 0x80000000) {
    local_f8 = 0x10;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    local_188 = CONCAT44(uRam0000000141dd03ac,_DAT_141dd03a8);
    uStack_180 = uRam0000000141dd03b0;
    uStack_17c = DAT_141dd03b4;
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_188);
    local_b8 = &local_158;
    if ((int)local_80[0] < 2) {
      puVar6 = &DAT_1419df7b0;
LAB_140329c79:
      local_188 = *puVar6;
      uStack_180 = *(undefined4 *)(puVar6 + 1);
      uStack_17c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_188);
    }
    else {
      puVar6 = (undefined8 *)local_78[1];
      if (puVar6 != &local_148) goto LAB_140329c79;
    }
    local_b0 = &local_148;
    local_188 = CONCAT44(uRam0000000141dd038c,_DAT_141dd0388);
    uStack_180 = uRam0000000141dd0390;
    uStack_17c = DAT_141dd0394;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_188);
    local_a8 = &local_138;
    local_188 = CONCAT44(uRam00000001419e4034,_DAT_1419e4030);
    uStack_180 = uRam00000001419e4038;
    uStack_17c = uRam00000001419e403c;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_188);
    local_a0 = &local_128;
    local_188 = CONCAT44(uRam0000000141dd037c,_DAT_141dd0378);
    uStack_180 = uRam0000000141dd0380;
    uStack_17c = DAT_141dd0384;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_188);
    local_98 = local_118;
    ppuVar14 = ppuVar15;
    FUN_14008e020(local_res8,local_res10,&local_178,5,ppuVar15);
  }
  local_f8 = 0x17;
  if ((int)local_80[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_78[1];
  }
  uStack_17c = 0;
  local_188 = 0;
  iVar3 = FUN_140e851f0(puVar6,&local_188,DAT_141955260,1);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if (iVar3 == -2 || -1 < iVar3) goto LAB_140329f1e;
  local_f8 = 0x17;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  local_c8 = _DAT_141dd03a8;
  uStack_c4 = uRam0000000141dd03ac;
  uStack_c0 = uRam0000000141dd03b0;
  uStack_bc = DAT_141dd03b4;
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_140041b80(&local_158,&local_c8);
  local_b8 = &local_158;
  if ((int)local_80[0] < 2) {
    puVar6 = &DAT_1419df7b0;
LAB_140329e83:
    local_c8 = *(undefined4 *)puVar6;
    uStack_c4 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_c0 = *(undefined4 *)(puVar6 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_c8);
  }
  else {
    puVar6 = (undefined8 *)local_78[1];
    if (puVar6 != &local_148) goto LAB_140329e83;
  }
  local_b0 = &local_148;
  local_c8 = _DAT_141dd03b8;
  uStack_c4 = uRam0000000141dd03bc;
  uStack_c0 = uRam0000000141dd03c0;
  uStack_bc = DAT_141dd03c4;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_c8);
  local_a8 = &local_138;
  FUN_14008e020(local_res8,local_res10,&local_178,3,ppuVar15);
  ppuVar14 = ppuVar15;
LAB_140329f1e:
  local_f8 = 0x11;
  plVar9 = (longlong *)(**(code **)(*DAT_141dde240 + 8))(DAT_141dde240,DAT_141a026b8);
  if ((int)local_80[0] < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*local_78;
  }
  uVar5 = FUN_140e4a740(puVar6);
  if ((int)local_80[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_78[1];
  }
  iVar3 = FUN_140e4a740(puVar6);
  if (((*(uint *)((longlong)plVar9 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar9, lVar1 != 0)) {
    if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar11 = (longlong *)0x0;
    }
    else {
      plVar11 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
    plVar11 = plVar9;
  }
  uVar18 = (ulonglong)ppuVar17 & 0xffffffffffffff00;
  uVar16 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
  FUN_140e87440(plVar11,DAT_1419fd6e8,uVar5,&local_90,uVar16,uVar18);
  iVar3 = FUN_140e63cb0(local_70,&local_res8,&local_res10,&local_90);
  if (iVar3 < 1) {
    FUN_140e63970(local_70,&local_res8,&local_res10);
    DAT_141a67c38 = 1;
    if ((int)local_80[0] < 1) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)*local_78;
    }
    uVar5 = FUN_140e4a740(puVar6);
    if (1 < (int)local_80[0]) {
      puVar13 = (undefined8 *)local_78[1];
    }
    iVar3 = FUN_140e4a740(puVar13);
    if (((*(uint *)((longlong)plVar9 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar9, lVar1 != 0)) {
      if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar9 = (longlong *)0x0;
      }
      else {
        plVar9 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    FUN_140e87440(plVar9,DAT_1419fd6e8,uVar5,&local_90,uVar16 & 0xffffffffffffff00,
                  uVar18 & 0xffffffffffffff00);
    DAT_141a67c38 = 0;
    DAT_141a72aac = 0;
  }
  else {
    local_f8 = 0x13;
    uVar8 = (**(code **)(*DAT_141dde240 + 8))(DAT_141dde240,DAT_1419fcb48);
    uVar10 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd758);
    FUN_140e87440(uVar8,DAT_1419fe1c8,0x80000000,&local_e0,uVar16 & 0xffffffffffffff00,
                  uVar18 & 0xffffffffffffff00);
    uStack_17c = local_d4;
    uStack_180 = local_d8;
    if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) == 0) {
      local_188 = local_e0;
    }
    else {
      FUN_1400419b0(&local_188,&local_e0);
    }
    FUN_1400462a0(&local_188,uVar10);
    if (&local_188 != param_3) {
      local_c8 = (undefined4)local_188;
      uStack_c4 = local_188._4_4_;
      uStack_c0 = uStack_180;
      uStack_bc = uStack_17c;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_c8);
    }
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
  }
  if (local_60 != 0) {
    FUN_140e4cd60();
    local_60 = 0;
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  _eh_vector_destructor_iterator_(&local_158,0x10,5,FUN_140041b30);
  if (0 < (int)local_80[0]) {
    puVar13 = local_78;
    do {
      puVar6 = (undefined8 *)*puVar13;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = 0;
      *(undefined4 *)((longlong)puVar6 + 0xc) = 5;
      puVar13 = puVar13 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  FUN_140e4cd60(local_78);
  DAT_141dc7a50 = (undefined8 *)local_108;
  return param_3;
}

