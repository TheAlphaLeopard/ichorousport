// gml_Script_anon_223_gml_Object_oTongue_Create_0 @ 0x140dc5ae0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script_anon_223_gml_Object_oTongue_Create_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  undefined8 *puVar3;
  double *pdVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar10;
  undefined8 uVar9;
  double **ppdVar11;
  undefined4 uVar12;
  undefined8 local_c8;
  undefined4 uStack_c0;
  uint uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  double local_a8;
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  double *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_70 = "gml_Object_oTitleTop_Draw_64";
  local_68 = 0;
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  uVar10 = 1;
  _eh_vector_constructor_iterator_(&local_a8,0x10,3,FUN_1400424d0,FUN_140041b30);
  puVar3 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef358);
  local_ac = 0xffffff;
  local_b8 = 0;
  local_68 = 2;
  pdVar4 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a718);
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a718);
  if (pdVar4 != &local_a8) {
    local_c8 = *pdVar4;
    uStack_c0 = *(undefined4 *)(pdVar4 + 1);
    uStack_bc = *(undefined4 *)((longlong)pdVar4 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_c8);
  }
  local_60 = &local_a8;
  local_c8 = (double)CONCAT44(uRam00000001419ee284,_DAT_1419ee280);
  uStack_c0 = uRam00000001419ee288;
  uStack_bc = uRam00000001419ee28c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_c8);
  local_58 = local_98;
  local_c8 = (double)CONCAT44(uRam00000001419ee274,_DAT_1419ee270);
  uStack_c0 = uRam00000001419ee278;
  uStack_bc = uRam00000001419ee27c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_c8);
  local_50 = local_88;
  FUN_140e609c0(param_1);
  ppdVar11 = &local_60;
  uVar9 = CONCAT44(uVar10,DAT_141a00c58);
  puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_b8,3,uVar9,ppdVar11);
  uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
  uVar12 = (undefined4)((ulonglong)ppdVar11 >> 0x20);
  if (puVar6 != puVar5) {
    local_c8 = (double)*puVar6;
    uStack_c0 = *(undefined4 *)(puVar6 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_c8);
  }
  FUN_140e60910(1);
  local_68 = 4;
  uStack_bc = 0xf;
  local_c8 = 7.291128972913664e-304;
  if ((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) == 0) {
    dVar7 = *pdVar4;
  }
  else {
    dVar7 = (double)FUN_140e4b060(pdVar4);
  }
  dVar8 = local_c8;
  if ((uStack_bc & 0xffffff) != 0) {
    dVar8 = (double)FUN_140e4b060(&local_c8);
  }
  uVar9 = CONCAT44(uVar10,0x43070000);
  FUN_140ec5dd0(param_1,(int)dVar8,0,0x43700000,uVar9,CONCAT44(uVar12,0x3dcccccd),0x3dcccccd,0,
                0xffffff,(float)dVar7);
  uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_68 = 6;
  uStack_bc = 0;
  local_c8 = 0.9;
  uVar2 = FUN_140e851f0(pdVar4,&local_c8,DAT_141955260,1);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if (uVar2 < 0x80000000) {
    local_68 = 8;
    (**(code **)(*param_1 + 8))(param_1,DAT_141a0a718);
    thunk_FUN_141039d20(1);
    local_68 = 9;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_b8 = 0;
    local_b0 = 0;
    local_ac = 5;
    local_c8 = (double)CONCAT44(uRam00000001419ee294,_DAT_1419ee290);
    uStack_c0 = uRam00000001419ee298;
    uStack_bc = uRam00000001419ee29c;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_c8);
    local_60 = &local_a8;
    local_c8 = (double)CONCAT44(uRam00000001419ee2a4,_DAT_1419ee2a0);
    uStack_c0 = uRam00000001419ee2a8;
    uStack_bc = uRam00000001419ee2ac;
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_c8);
    local_58 = local_98;
    local_c8 = (double)CONCAT44(uRam0000000141ddbb9c,_DAT_141ddbb98);
    uStack_c0 = uRam0000000141ddbba0;
    uStack_bc = DAT_141ddbba4;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_c8);
    local_50 = local_88;
    FUN_140e634e0(param_1,param_2,&local_b8,3,CONCAT44(uVar10,DAT_141a04598),&local_60);
    local_68 = 0xb;
    cVar1 = FUN_140eab100(0x20);
    if (cVar1 != '\0') {
      local_68 = 0xc;
      uStack_bc = 0xd;
      local_c8 = 1.0;
      if (&local_c8 != puVar3) {
        local_48 = 0;
        uStack_44 = 0x3ff00000;
        uStack_40 = uStack_c0;
        uStack_3c = 0xd;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar3);
        }
        FUN_140041b80(puVar3,&local_48);
      }
    }
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(&local_a8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return;
}

