// gml_Script___InputClassVirtualButton @ 0x140061da0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script___InputClassVirtualButton
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double **ppdVar9;
  undefined8 *puVar10;
  double *pdVar11;
  undefined8 uVar12;
  longlong **pplVar13;
  uint uVar14;
  uint uVar15;
  undefined8 *puVar16;
  uint uVar17;
  float fVar18;
  undefined4 uVar23;
  undefined8 uVar19;
  double dVar20;
  double dVar21;
  ulonglong uVar22;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  uint local_res20;
  code *pcVar24;
  ulonglong in_stack_fffffffffffffd70;
  undefined8 local_288;
  undefined4 local_280;
  undefined4 local_27c;
  undefined8 local_278;
  undefined4 local_26c;
  undefined8 local_268;
  char *local_260;
  undefined4 local_258;
  int local_250;
  undefined8 local_248;
  uint local_23c;
  double *local_238;
  undefined8 *local_230;
  undefined1 *local_228;
  double local_220;
  undefined4 local_214;
  undefined8 local_210 [2];
  undefined1 local_200 [16];
  longlong **local_1f0 [2];
  undefined8 local_1e0;
  byte local_1d4;
  undefined8 local_1d0;
  undefined4 local_1c4;
  undefined8 local_1c0;
  undefined4 local_1b4;
  undefined1 local_1b0 [12];
  byte local_1a4;
  double local_1a0;
  undefined4 local_194;
  double local_190;
  undefined4 local_184;
  undefined8 local_180;
  undefined4 local_174;
  undefined8 local_170;
  undefined4 local_164;
  undefined8 local_160;
  undefined4 local_154;
  undefined8 local_150;
  undefined4 local_144;
  undefined8 local_140;
  undefined4 local_134;
  undefined8 local_130;
  undefined4 local_124;
  undefined8 local_120;
  undefined4 local_114;
  undefined8 local_110;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a4;
  int local_a0 [2];
  undefined8 *local_98;
  undefined1 local_90 [80];
  
  uVar17 = 0;
  local_res20 = 0;
  local_260 = "gml_Script___Collect@anon@20753@__InputClassVirtualButton@__InputClassVirtualButton";
  local_268 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_268;
  local_258 = 0x301;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_140041df0(local_a0,param_4,2,param_5);
  local_250 = local_a0[0];
  pcVar24 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_220,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_184 = 0xffffff;
  local_190 = 0.0;
  local_134 = 0xffffff;
  local_140 = 0;
  local_f4 = 0xffffff;
  local_100 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_1b4 = 0xffffff;
  local_1c0 = 0;
  local_1c4 = 0xffffff;
  local_1d0 = 0;
  local_194 = 0xffffff;
  local_1a0 = 0.0;
  local_144 = 0xffffff;
  local_150 = 0;
  local_164 = 0xffffff;
  local_170 = 0;
  local_174 = 0xffffff;
  local_180 = 0;
  local_104 = 0xffffff;
  local_110 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_154 = 0xffffff;
  local_160 = 0;
  local_114 = 0xffffff;
  local_120 = 0;
  local_124 = 0xffffff;
  local_130 = 0;
  local_27c = 0;
  local_288 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_258 = 0x303;
  uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fe338);
  FUN_140041c60(&local_190,uVar7);
  local_258 = 0x305;
  uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fe108);
  cVar2 = FUN_140e491e0(uVar7);
  puVar16 = &DAT_1419df7b0;
  if ((cVar2 != '\0') ||
     (iVar3 = FUN_140e851f0(&local_190,&DAT_1419df7b0,DAT_141955260,0), iVar3 == 0)) {
    local_258 = 0x307;
    uVar7 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd828);
    local_26c = 0xd;
    local_278 = 0;
    FUN_140041c60(uVar7,&local_278);
    if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    local_258 = 0x308;
LAB_14006610d:
    puVar16 = local_res18;
    FUN_140041c60(local_res18,&DAT_1419df7b0);
    goto LAB_140066120;
  }
  local_258 = 0x30c;
  uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fde28);
  cVar2 = FUN_140e491e0(uVar7);
  if (cVar2 == '\0') {
LAB_1400620e8:
    local_258 = 0x315;
    uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd828);
    uVar8 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fde28);
    FUN_140e609c0(local_res8);
    FUN_140041c60(uVar8,uVar7);
    FUN_140e60910(1);
    iVar3 = local_250;
  }
  else {
    uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd828);
    cVar2 = FUN_140e491e0(uVar7);
    if (cVar2 != '\0') goto LAB_1400620e8;
    local_258 = 0x30e;
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    local_288 = 0;
    local_280 = 0;
    local_27c = 5;
    pcVar24 = (code *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fe688);
    in_stack_fffffffffffffd70 = 0;
    FUN_140e63610(local_res8,param_2,&local_288,0,pcVar24,0);
    local_258 = 0x311;
    uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fe108);
    cVar2 = FUN_140e491e0(uVar7);
    iVar3 = local_a0[0];
    if (cVar2 != '\0') {
      local_258 = 0x311;
      goto LAB_14006610d;
    }
  }
  local_258 = 0x318;
  uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fe6a8);
  uVar8 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fcb48);
  ppdVar9 = (double **)(in_stack_fffffffffffffd70 & 0xffffffffffffff00);
  uVar22 = (ulonglong)pcVar24 & 0xffffffffffffff00;
  FUN_140e87440(uVar8,DAT_1419fe1c8,0x80000000,&local_140,uVar22,ppdVar9);
  iVar4 = FUN_140e851f0(uVar7,&local_140,DAT_141955260,0);
  if (iVar4 == 0) {
    local_258 = 0x31a;
    uVar7 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd828);
    uVar6 = (undefined4)(uVar22 >> 0x20);
    local_23c = 0xd;
    local_248 = 0x3ff0000000000000;
    FUN_140041c60(uVar7,&local_248);
    if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_258 = 0x31b;
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    local_288 = 0;
    local_280 = 0;
    local_27c = 5;
    uVar7 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fe4a8);
    local_238 = &local_190;
    FUN_140e609c0(local_res8);
    uVar12 = CONCAT44(uVar6,DAT_1419fe138);
    uVar8 = FUN_140e634e0(local_res8,param_2,&local_288,1,uVar12,&local_238);
    uVar6 = (undefined4)((ulonglong)uVar12 >> 0x20);
    FUN_140041c60(uVar7,uVar8);
    FUN_140e60910(1);
    local_258 = 0x31c;
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    local_288 = 0;
    local_280 = 0;
    local_27c = 5;
    uVar7 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fe398);
    local_238 = &local_190;
    FUN_140e609c0(local_res8);
    ppdVar9 = &local_238;
    uVar22 = CONCAT44(uVar6,DAT_1419fe248);
    uVar8 = FUN_140e634e0(local_res8,param_2,&local_288,1,uVar22,ppdVar9);
    FUN_140041c60(uVar7,uVar8);
    FUN_140e60910(1);
  }
  local_258 = 799;
  uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd828);
  cVar2 = FUN_140e491e0(uVar7);
  if (cVar2 == '\0') {
    local_258 = 0x321;
    uVar7 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fe4a8);
    FUN_140e609c0(local_res8);
    FUN_140041c60(uVar7,&DAT_1419df7b0);
    FUN_140e60910(1);
    local_258 = 0x322;
    uVar7 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fe398);
    FUN_140e609c0(local_res8);
    FUN_140041c60(uVar7,&DAT_1419df7b0);
    FUN_140e60910(1);
    puVar16 = local_res18;
    goto LAB_140066120;
  }
  local_258 = 0x326;
  uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fe3e8);
  cVar2 = FUN_140e491e0(uVar7);
  if (cVar2 == '\0') {
    local_258 = 0x32c;
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    uVar6 = (undefined4)(uVar22 >> 0x20);
    local_288 = 0;
    local_280 = 0;
    local_27c = 5;
    local_238 = &local_190;
    FUN_1400441d0(local_210,&DAT_1419df8c0);
    local_230 = local_210;
    uVar8 = CONCAT44(uVar6,DAT_1419fe558);
    uVar7 = FUN_140e634e0(local_res8,param_2,&local_288,2,uVar8,&local_238);
    uVar6 = (undefined4)((ulonglong)uVar8 >> 0x20);
    FUN_140041c60(&local_100,uVar7);
  }
  else {
    local_258 = 0x328;
    uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fe6a8);
    uVar8 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fcb48);
    uVar22 = uVar22 & 0xffffffffffffff00;
    FUN_140e87440(uVar8,DAT_1419fe1c8,0x80000000,&local_140,uVar22,
                  (ulonglong)ppdVar9 & 0xffffffffffffff00);
    uVar6 = (undefined4)(uVar22 >> 0x20);
    iVar4 = FUN_140e851f0(uVar7,&local_140,DAT_141955260,0);
    FUN_140041d00(&local_100,iVar4 == 0);
  }
  local_258 = 0x339;
  cVar2 = FUN_140e491e0(&local_100);
  if (cVar2 == '\0') {
    local_258 = 0x33b;
    uVar7 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd828);
    local_23c = 0xd;
    local_248 = 0;
    FUN_140041c60(uVar7,&local_248);
    if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    puVar16 = local_res18;
    goto LAB_140066120;
  }
  local_258 = 0x33f;
  uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fe0c8);
  iVar4 = FUN_140e851f0(uVar7,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 != 0) {
    local_258 = 0x341;
    uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fe0c8);
    uVar5 = FUN_140e4a740(uVar7);
    if (iVar3 < 1) {
      local_1f0[0] = (longlong **)&DAT_1419df7b0;
    }
    else {
      local_1f0[0] = (longlong **)*local_98;
    }
    uVar7 = FUN_140e48e40(local_1f0[0],uVar5);
    FUN_140e609c0(**local_1f0[0]);
    FUN_140044220(uVar7,1);
    FUN_140e60910(1);
    local_258 = 0x342;
    uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fe0c8);
    uVar5 = FUN_140e4a740(uVar7);
    if (iVar3 < 2) {
      puVar10 = &DAT_1419df7b0;
    }
    else {
      puVar10 = (undefined8 *)local_98[1];
    }
    uVar7 = FUN_140e48e40(puVar10,uVar5);
    FUN_140e609c0(*(undefined8 *)*puVar10);
    FUN_140044220(uVar7,1);
    FUN_140e60910(1);
  }
  local_258 = 0x345;
  uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fe7d8);
  uVar8 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fe4a8);
  FUN_140e609c0(local_res8);
  FUN_140041c60(uVar8,uVar7);
  FUN_140e60910(1);
  local_258 = 0x346;
  uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fe438);
  uVar8 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fe398);
  FUN_140e609c0(local_res8);
  FUN_140041c60(uVar8,uVar7);
  FUN_140e60910(1);
  local_258 = 0x34a;
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  local_288 = 0;
  local_280 = 0;
  local_27c = 5;
  uVar7 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fe7d8);
  local_238 = &local_190;
  FUN_140e609c0(local_res8);
  uVar12 = CONCAT44(uVar6,DAT_1419fe138);
  uVar8 = FUN_140e634e0(local_res8,param_2,&local_288,1,uVar12,&local_238);
  uVar6 = (undefined4)((ulonglong)uVar12 >> 0x20);
  FUN_140041c60(uVar7,uVar8);
  FUN_140e60910(1);
  local_258 = 0x34b;
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  local_288 = 0;
  local_280 = 0;
  local_27c = 5;
  uVar7 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fe438);
  local_238 = &local_190;
  FUN_140e609c0(local_res8);
  ppdVar9 = (double **)CONCAT44(uVar6,DAT_1419fe248);
  uVar8 = FUN_140e634e0(local_res8,param_2,&local_288,1,ppdVar9,&local_238);
  FUN_140041c60(uVar7,uVar8);
  FUN_140e60910(1);
  local_258 = 0x34e;
  uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fe1b8);
  cVar2 = FUN_140e491e0(uVar7);
  if (cVar2 != '\0') {
    local_258 = 0x34e;
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    local_288 = 0;
    local_280 = 0;
    local_27c = 5;
    uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fe7d8);
    uVar8 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fe438);
    ppdVar9 = (double **)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fe4b8);
    FUN_140041c60(&local_220,uVar7);
    local_238 = &local_220;
    FUN_140041c60(local_210,uVar8);
    local_230 = local_210;
    FUN_140e63610(local_res8,local_res10,&local_288,2,ppdVar9,&local_238);
  }
  local_258 = 0x351;
  uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd248);
  cVar2 = FUN_140046b60(uVar7,6);
  if (cVar2 == '\0') {
    local_1f0[0] = &local_res8;
    puVar10 = (undefined8 *)FUN_140066270(local_1f0,&local_278);
    uVar15 = 2;
    local_res20 = 2;
  }
  else {
    local_23c = 10;
    local_248 = 2;
    puVar10 = &local_248;
    uVar15 = 1;
    local_res20 = 1;
  }
  FUN_140041c60(&local_b0,puVar10);
  if ((uVar15 & 2) != 0) {
    uVar15 = uVar15 & 0xfffffffd;
    local_res20 = uVar15;
    if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
  }
  if ((uVar15 & 1) != 0) {
    uVar15 = uVar15 & 0xfffffffe;
    local_res20 = uVar15;
    if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
  }
  local_258 = 0x352;
  FUN_1400424a0(local_90,&local_b0);
  local_1f0[0] = *(longlong ***)ThreadLocalStoragePointer;
  if ((*(int *)(local_1f0[0] + 3) < DAT_141ddc3bc) &&
     (_Init_thread_header(&DAT_141ddc3bc), DAT_141ddc3bc == -1)) {
    _DAT_141ddc3d4 = 10;
    _DAT_141ddc3c8 = 0;
    _DAT_141ddc3e8 = 10;
    _DAT_141ddc3dc = 1;
    _DAT_141ddc3ec = 1;
    _DAT_141ddc3fc = 10;
    _DAT_141ddc3f0 = 2;
    _DAT_141ddc400 = 2;
    atexit((_func_5014 *)&LAB_14145c910);
    _Init_thread_footer(&DAT_141ddc3bc);
  }
  uVar14 = 0;
  do {
    iVar3 = FUN_140e851f0(&DAT_141ddc3c8 + (longlong)(int)uVar14 * 0x14,local_90,DAT_141955260,0);
    if (iVar3 == 0) {
      iVar3 = *(int *)(&DAT_141ddc3d8 + (longlong)(int)uVar14 * 0x14);
      if (iVar3 == 0) {
        local_258 = 0x355;
        uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fe7d8);
        uVar8 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fe328);
        FUN_1400424a0(&local_248,uVar7);
        local_res20 = uVar15 | 8;
        FUN_1400462a0(&local_248,uVar8);
        FUN_140041c60(&local_1c0,&local_248);
        local_res20 = uVar15;
        if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_248);
        }
        local_258 = 0x356;
        uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fe438);
        uVar8 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fe528);
        FUN_1400424a0(&local_248,uVar7);
        local_res20 = uVar15 | 0x10;
        FUN_1400462a0(&local_248,uVar8);
        FUN_140041c60(&local_1d0,&local_248);
        local_res20 = uVar15;
        if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_248);
        }
      }
      else if (iVar3 == 1) {
        local_258 = 0x35a;
        uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fe7d8);
        uVar8 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fe088);
        FUN_1400424a0(&local_248,uVar7);
        local_res20 = uVar15 | 0x20;
        FUN_1400462a0(&local_248,uVar8);
        FUN_140041c60(&local_1c0,&local_248);
        local_res20 = uVar15;
        if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_248);
        }
        local_258 = 0x35b;
        uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fe438);
        uVar8 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fe798);
        FUN_1400424a0(&local_248,uVar7);
        local_res20 = uVar15 | 0x40;
        FUN_1400462a0(&local_248,uVar8);
        FUN_140041c60(&local_1d0,&local_248);
        local_res20 = uVar15;
        if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_248);
        }
      }
      else {
        if (iVar3 != 2) break;
        local_258 = 0x35f;
        uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fe7d8);
        uVar8 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fe4a8);
        FUN_1400424a0(&local_248,uVar7);
        local_res20 = uVar15 | 0x80;
        FUN_1400462a0(&local_248,uVar8);
        FUN_140041c60(&local_1c0,&local_248);
        local_res20 = uVar15;
        if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_248);
        }
        local_258 = 0x360;
        uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fe438);
        uVar8 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fe398);
        FUN_1400424a0(&local_248,uVar7);
        local_res20 = uVar15 | 0x100;
        FUN_1400462a0(&local_248,uVar8);
        FUN_140041c60(&local_1d0,&local_248);
        local_res20 = uVar15;
        if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_248);
        }
      }
      uVar7 = local_res10;
      goto LAB_140062f77;
    }
    uVar14 = uVar14 + 1;
  } while (uVar14 < 3);
  local_258 = 0x364;
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  local_288 = 0;
  local_280 = 0;
  local_27c = 5;
  uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fe2e8);
  FUN_140041c60(&local_220,&DAT_141dc7b18);
  local_238 = &local_220;
  FUN_140041c60(local_210,uVar7);
  local_230 = local_210;
  FUN_140041c60(local_200,&DAT_141dc7b08);
  uVar7 = local_res10;
  local_228 = local_200;
  ppdVar9 = &local_238;
  FUN_14008e020(local_res8,local_res10,&local_288,3,ppdVar9);
LAB_140062f77:
  local_258 = 0x368;
  FUN_1400424a0(&local_1e0,&local_1d0);
  local_res20 = uVar15 | 0x200;
  FUN_140042560(&local_1e0,&local_1d0);
  FUN_1400424a0(local_1b0,&local_1c0);
  local_res20 = uVar15 | 0x600;
  FUN_140042560(local_1b0,&local_1c0);
  FUN_1400424a0(&local_248,local_1b0);
  local_res20 = uVar15 | 0xe00;
  FUN_1400460e0(&local_248,&local_1e0);
  FUN_140041c60(&local_1a0,&local_248);
  local_res20 = uVar15 | 0x600;
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_res20 = uVar15 | 0x200;
  if ((1 << (local_1a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1b0);
  }
  local_res20 = uVar15;
  if ((1 << (local_1d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e0);
  }
  local_258 = 0x369;
  cVar2 = FUN_140046c90(&local_1a0,0);
  uVar6 = (undefined4)((ulonglong)ppdVar9 >> 0x20);
  if (cVar2 == '\0') {
    local_258 = 0x372;
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    local_288 = 0;
    local_280 = 0;
    local_27c = 5;
    local_238 = &local_1a0;
    ppdVar9 = (double **)CONCAT44(uVar6,DAT_1419fd718);
    uVar7 = FUN_140e634e0(local_res8,uVar7,&local_288,1,ppdVar9,&local_238);
    FUN_140041c60(&local_1a0,uVar7);
    local_258 = 0x373;
    uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fe238);
    uVar8 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fe298);
    FUN_1400424a0(&local_278,uVar8);
    local_res20 = uVar15 | 0x1000;
    FUN_1400462a0(&local_278,uVar7);
    FUN_1400424a0(local_1b0,&local_1a0);
    local_res20 = uVar15 | 0x3000;
    FUN_1400462a0(local_1b0,uVar7);
    FUN_1400424a0(&local_248,local_1b0);
    local_res20 = uVar15 | 0x7000;
    FUN_140046500(&local_248,&local_278);
    if ((local_23c & 0xffffff) == 0) {
      uVar7 = local_248;
    }
    else {
      uVar7 = FUN_140e4b060(&local_248);
    }
    uVar7 = FUN_140e78ec0(uVar7,0,0x3ff0000000000000);
    FUN_140042540(&local_1e0,uVar7);
    local_res20 = uVar15 | 0xf000;
    FUN_140046500(&local_1e0,&local_1a0);
    FUN_140041c60(&local_150,&local_1e0);
    local_res20 = uVar15 | 0x7000;
    if ((1 << (local_1d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e0);
    }
    local_res20 = uVar15 | 0x3000;
    if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_res20 = uVar15 | 0x1000;
    if ((1 << (local_1a4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1b0);
    }
    local_res20 = uVar15;
    if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    local_258 = 0x374;
    uVar7 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fe428);
    FUN_140e609c0(local_res8);
    FUN_1400424a0(&local_278,&local_150);
    local_res20 = uVar15 | 0x10000;
    FUN_140042560(&local_278,&local_1c0);
    FUN_140041c60(uVar7,&local_278);
    local_res20 = uVar15;
    if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    FUN_140e60910(1);
    local_258 = 0x375;
    uVar7 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fe888);
    FUN_140e609c0(local_res8);
    FUN_1400424a0(&local_278,&local_150);
    local_res20 = uVar15 | 0x20000;
    FUN_140042560(&local_278,&local_1d0);
    FUN_140041c60(uVar7,&local_278);
    local_res20 = uVar15;
    if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    FUN_140e60910(1);
    local_258 = 0x377;
    uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fe708);
    cVar2 = FUN_140e491e0(uVar7);
    if (cVar2 != '\0') {
      local_258 = 0x379;
      FUN_140044220(&local_170,0);
      local_258 = 0x37a;
      FUN_140044220(&local_180,0);
      local_258 = 0x37c;
      uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fe668);
      local_26c = 0xd;
      local_278 = 0x3ff0000000000000;
      iVar3 = FUN_140e851f0(uVar7,&local_278,DAT_141955260,0);
      if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      if (iVar3 == 0) {
        local_258 = 0x37e;
        if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_288);
        }
        local_288 = 0;
        local_280 = 0;
        local_27c = 5;
        uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fe368);
        FUN_1400441d0(&local_220,&DAT_141dc5ff0);
        local_238 = &local_220;
        FUN_1400424a0(&local_278,&local_1a0);
        local_res20 = uVar15 | 0x40000;
        FUN_1400462a0(&local_278,uVar7);
        FUN_140041c60(local_210,&local_278);
        local_res20 = uVar15;
        if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_278);
        }
        local_230 = local_210;
        uVar7 = FUN_140e79090(&local_288,2,&local_238);
        FUN_140041c60(&local_110,uVar7);
        local_258 = 0x37f;
        FUN_1400424a0(&local_1e0,&local_110);
        local_res20 = uVar15 | 0x80000;
        FUN_140042560(&local_1e0,&local_1c0);
        FUN_1400424a0(&local_278,&local_1e0);
        local_res20 = uVar15 | 0x180000;
        FUN_140046500(&local_278,&local_1a0);
        FUN_140041c60(&local_170,&local_278);
        local_res20 = uVar15 | 0x80000;
        if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_278);
        }
        local_res20 = uVar15;
        if ((1 << (local_1d4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e0);
        }
        local_258 = 0x380;
        FUN_1400424a0(&local_1e0,&local_110);
        local_res20 = uVar15 | 0x200000;
        FUN_140042560(&local_1e0,&local_1d0);
        FUN_1400424a0(&local_278,&local_1e0);
        local_res20 = uVar15 | 0x600000;
        FUN_140046500(&local_278,&local_1a0);
        FUN_140041c60(&local_180,&local_278);
        local_res20 = uVar15 | 0x200000;
        if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_278);
        }
        if ((1 << (local_1d4 & 0x1f) & 0x46U) != 0) {
          puVar10 = &local_1e0;
LAB_140063bf5:
          FUN_140041a50(puVar10);
        }
      }
      else {
        local_258 = 0x382;
        uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fe668);
        local_26c = 0xd;
        local_278 = 0;
        iVar3 = FUN_140e851f0(uVar7,&local_278,DAT_141955260,0);
        if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_278);
        }
        if (iVar3 == 0) {
          local_258 = 900;
          if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_288);
          }
          local_288 = 0;
          local_280 = 0;
          local_27c = 5;
          uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fe7d8);
          uVar8 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fe418);
          FUN_1400441d0(&local_220,&DAT_141dc5ff0);
          local_238 = &local_220;
          FUN_1400424a0(&local_278,uVar7);
          local_res20 = uVar15 | 0x800000;
          FUN_1400462a0(&local_278,uVar8);
          FUN_140041c60(local_210,&local_278);
          local_res20 = uVar15;
          if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_278);
          }
          local_230 = local_210;
          uVar7 = FUN_140e79230(&local_288,2,&local_238);
          FUN_140041c60(&local_c0,uVar7);
          local_258 = 0x385;
          if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_288);
          }
          local_288 = 0;
          local_280 = 0;
          local_27c = 5;
          uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fe438);
          uVar8 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fe4d8);
          FUN_1400441d0(&local_220,&DAT_141dc5ff0);
          local_238 = &local_220;
          FUN_1400424a0(&local_278,uVar7);
          local_res20 = uVar15 | 0x1000000;
          FUN_1400462a0(&local_278,uVar8);
          FUN_140041c60(local_210,&local_278);
          local_res20 = uVar15;
          if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_278);
          }
          local_230 = local_210;
          uVar7 = FUN_140e79230(&local_288,2,&local_238);
          FUN_140041c60(&local_d0,uVar7);
          local_258 = 0x386;
          if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_288);
          }
          local_288 = 0;
          local_280 = 0;
          local_27c = 5;
          uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fe7d8);
          uVar8 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fe228);
          FUN_1400441d0(&local_220,&DAT_141dc5ff0);
          local_238 = &local_220;
          FUN_1400424a0(&local_278,uVar7);
          local_res20 = uVar15 | 0x2000000;
          FUN_1400462a0(&local_278,uVar8);
          FUN_140041c60(local_210,&local_278);
          local_res20 = uVar15;
          if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_278);
          }
          local_230 = local_210;
          uVar7 = FUN_140e79090(&local_288,2,&local_238);
          FUN_140041c60(&local_e0,uVar7);
          local_258 = 0x387;
          if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_288);
          }
          local_288 = 0;
          local_280 = 0;
          local_27c = 5;
          uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fe438);
          uVar8 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fe678);
          FUN_1400441d0(&local_220,&DAT_141dc5ff0);
          local_238 = &local_220;
          FUN_1400424a0(&local_278,uVar7);
          local_res20 = uVar15 | 0x4000000;
          FUN_1400462a0(&local_278,uVar8);
          FUN_140041c60(local_210,&local_278);
          local_res20 = uVar15;
          if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_278);
          }
          local_230 = local_210;
          uVar7 = FUN_140e79090(&local_288,2,&local_238);
          FUN_140041c60(&local_f0,uVar7);
          local_258 = 0x389;
          FUN_1400424a0(&local_278,&local_c0);
          local_res20 = uVar15 | 0x8000000;
          FUN_1400460e0(&local_278,&local_e0);
          FUN_1400460e0(&local_170,&local_278);
          local_res20 = uVar15;
          if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_278);
          }
          local_258 = 0x38a;
          FUN_1400424a0(&local_278,&local_d0);
          local_res20 = uVar15 | 0x10000000;
          FUN_1400460e0(&local_278,&local_f0);
          FUN_1400460e0(&local_180,&local_278);
          if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
            puVar10 = &local_278;
            goto LAB_140063bf5;
          }
        }
      }
      local_258 = 0x38d;
      uVar7 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fe328);
      FUN_140e609c0(local_res8);
      FUN_1400460e0(uVar7,&local_170);
      FUN_140e60910(1);
      local_258 = 0x38e;
      uVar7 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fe528);
      FUN_140e609c0(local_res8);
      FUN_1400460e0(uVar7,&local_180);
      FUN_140e60910(1);
      local_258 = 0x38f;
      uVar7 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fe418);
      FUN_140e609c0(local_res8);
      FUN_1400460e0(uVar7,&local_170);
      FUN_140e60910(1);
      local_258 = 0x390;
      uVar7 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fe4d8);
      FUN_140e609c0(local_res8);
      FUN_1400460e0(uVar7,&local_180);
      FUN_140e60910(1);
      local_258 = 0x391;
      uVar7 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fe228);
      FUN_140e609c0(local_res8);
      FUN_1400460e0(uVar7,&local_170);
      FUN_140e60910(1);
      local_258 = 0x392;
      uVar7 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fe678);
      FUN_140e609c0(local_res8);
      FUN_1400460e0(uVar7,&local_180);
      FUN_140e60910(1);
    }
  }
  else {
    local_258 = 0x36c;
    FUN_140044220(&local_150,0);
    local_258 = 0x36d;
    uVar7 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fe428);
    FUN_140044220(uVar7,0);
    local_258 = 0x36e;
    uVar7 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fe888);
    FUN_140044220(uVar7,0);
  }
  local_258 = 0x396;
  cVar2 = FUN_140046d30(&local_150,0);
  if (cVar2 != '\0') {
    local_258 = 0x398;
    uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd248);
    FUN_1400424a0(local_1b0,uVar7);
    pplVar13 = local_1f0[0];
    if ((*(int *)(local_1f0[0] + 3) < DAT_141ddc3b8) &&
       (_Init_thread_header(&DAT_141ddc3b8), DAT_141ddc3b8 == -1)) {
      _DAT_141ddc30c = 10;
      _DAT_141ddc300 = 4;
      _DAT_141ddc320 = 10;
      _DAT_141ddc314 = 3;
      _DAT_141ddc324 = 1;
      _DAT_141ddc334 = 10;
      _DAT_141ddc328 = 1;
      _DAT_141ddc338 = 2;
      _DAT_141ddc348 = 10;
      _DAT_141ddc33c = 2;
      _DAT_141ddc34c = 3;
      _DAT_141ddc35c = 10;
      _DAT_141ddc350 = 5;
      _DAT_141ddc360 = 4;
      _DAT_141ddc370 = 10;
      _DAT_141ddc364 = 6;
      _DAT_141ddc374 = 5;
      atexit((_func_5014 *)&LAB_14145c8f0);
      _Init_thread_footer(&DAT_141ddc3b8);
    }
    uVar15 = 0;
    do {
      iVar3 = FUN_140e851f0(&DAT_141ddc300 + (longlong)(int)uVar15 * 0x14,local_1b0,DAT_141955260,0)
      ;
      uVar6 = (undefined4)((ulonglong)ppdVar9 >> 0x20);
      if (iVar3 == 0) {
        bVar1 = (byte)local_27c;
        switch(*(undefined4 *)(&DAT_141ddc310 + (longlong)(int)uVar15 * 0x14)) {
        case 0:
          local_258 = 0x39b;
          if ((1 << (bVar1 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_288);
          }
          local_288 = 0;
          local_280 = 0;
          local_27c = 5;
          pdVar11 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fe428);
          puVar10 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fe888);
          if ((*(uint *)((longlong)puVar10 + 0xc) & 0xffffff) == 0) {
            uVar5 = (undefined4)*puVar10;
            uVar23 = (undefined4)((ulonglong)*puVar10 >> 0x20);
          }
          else {
            uVar7 = FUN_140e4b060(puVar10);
            uVar5 = (undefined4)uVar7;
            uVar23 = (undefined4)((ulonglong)uVar7 >> 0x20);
          }
          if ((*(uint *)((longlong)pdVar11 + 0xc) & 0xffffff) == 0) {
            dVar20 = *pdVar11;
          }
          else {
            dVar20 = (double)FUN_140e4b060(pdVar11);
          }
          fVar18 = (float)FUN_140e793d0(0,0,(float)dVar20,(float)(double)CONCAT44(uVar23,uVar5));
          local_220 = (double)fVar18 * 0.005555555555555556;
          if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_220);
          }
          local_214 = 0;
          local_238 = &local_220;
          puVar10 = (undefined8 *)
                    FUN_140e634e0(local_res8,local_res10,&local_288,1,CONCAT44(uVar6,DAT_1419fe728),
                                  &local_238);
          if ((*(uint *)((longlong)puVar10 + 0xc) & 0xffffff) == 0) {
            uVar7 = *puVar10;
          }
          else {
            uVar7 = FUN_140e4b060(puVar10);
          }
          dVar20 = (double)FUN_1412a79b0(uVar7,0x4000000000000000);
          if (dVar20 == 1.0) {
            local_258 = 0x39d;
            uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fcfd8);
            iVar3 = FUN_140e851f0(uVar7,&DAT_1419df7b0,DAT_141955260,0);
            if (iVar3 != 0) {
              local_258 = 0x39f;
              uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fcfd8);
              uVar6 = FUN_140e4a740(uVar7);
              iVar3 = local_250;
              if (local_250 < 1) {
                puVar10 = &DAT_1419df7b0;
              }
              else {
                puVar10 = (undefined8 *)*local_98;
              }
              uVar7 = FUN_140e48e40(puVar10,uVar6);
              FUN_140e609c0(*(undefined8 *)*puVar10);
              FUN_140044220(uVar7,1);
              FUN_140e60910(1);
              local_258 = 0x3a0;
              uVar6 = DAT_1419fcfd8;
              goto LAB_14006419b;
            }
          }
          else {
            local_258 = 0x3a5;
            uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd108);
            iVar3 = FUN_140e851f0(uVar7,&DAT_1419df7b0,DAT_141955260,0);
            if (iVar3 != 0) {
              local_258 = 0x3a7;
              uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd108);
              uVar6 = FUN_140e4a740(uVar7);
              iVar3 = local_250;
              if (local_250 < 1) {
                puVar10 = &DAT_1419df7b0;
              }
              else {
                puVar10 = (undefined8 *)*local_98;
              }
              uVar7 = FUN_140e48e40(puVar10,uVar6);
              FUN_140e609c0(*(undefined8 *)*puVar10);
              FUN_140044220(uVar7,1);
              FUN_140e60910(1);
              local_258 = 0x3a8;
              uVar6 = DAT_1419fd108;
LAB_14006419b:
              uVar7 = (**(code **)(*local_res8 + 8))(local_res8,uVar6);
              uVar6 = FUN_140e4a740(uVar7);
              if (1 < iVar3) {
                puVar16 = (undefined8 *)local_98[1];
              }
              uVar7 = FUN_140e48e40(puVar16,uVar6);
              FUN_140e609c0(*(undefined8 *)*puVar16);
              FUN_140044220(uVar7,1);
              FUN_140e60910(1);
            }
          }
          local_258 = 0x3ab;
          break;
        case 1:
          local_258 = 0x3ae;
          if ((1 << (bVar1 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_288);
          }
          local_288 = 0;
          local_280 = 0;
          local_27c = 5;
          pdVar11 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fe428);
          puVar10 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fe888);
          if ((*(uint *)((longlong)puVar10 + 0xc) & 0xffffff) == 0) {
            uVar5 = (undefined4)*puVar10;
            uVar23 = (undefined4)((ulonglong)*puVar10 >> 0x20);
          }
          else {
            uVar7 = FUN_140e4b060(puVar10);
            uVar5 = (undefined4)uVar7;
            uVar23 = (undefined4)((ulonglong)uVar7 >> 0x20);
          }
          if ((*(uint *)((longlong)pdVar11 + 0xc) & 0xffffff) == 0) {
            dVar20 = *pdVar11;
          }
          else {
            dVar20 = (double)FUN_140e4b060(pdVar11);
          }
          fVar18 = (float)FUN_140e793d0(0,0,(float)dVar20,(float)(double)CONCAT44(uVar23,uVar5));
          local_220 = (double)(fVar18 + 270.0) * 0.005555555555555556;
          if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_220);
          }
          local_214 = 0;
          local_238 = &local_220;
          puVar10 = (undefined8 *)
                    FUN_140e634e0(local_res8,local_res10,&local_288,1,CONCAT44(uVar6,DAT_1419fe728),
                                  &local_238);
          if ((*(uint *)((longlong)puVar10 + 0xc) & 0xffffff) == 0) {
            uVar7 = *puVar10;
          }
          else {
            uVar7 = FUN_140e4b060(puVar10);
          }
          dVar20 = (double)FUN_1412a79b0(uVar7,0x4000000000000000);
          if (dVar20 == 1.0) {
            local_258 = 0x3b0;
            uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd008);
            iVar3 = FUN_140e851f0(uVar7,&DAT_1419df7b0,DAT_141955260,0);
            if (iVar3 != 0) {
              local_258 = 0x3b2;
              uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd008);
              uVar6 = FUN_140e4a740(uVar7);
              iVar3 = local_250;
              if (local_250 < 1) {
                puVar10 = &DAT_1419df7b0;
              }
              else {
                puVar10 = (undefined8 *)*local_98;
              }
              uVar7 = FUN_140e48e40(puVar10,uVar6);
              FUN_140e609c0(*(undefined8 *)*puVar10);
              FUN_140044220(uVar7,1);
              FUN_140e60910(1);
              local_258 = 0x3b3;
              uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd008);
              uVar6 = FUN_140e4a740(uVar7);
              if (1 < iVar3) {
                puVar16 = (undefined8 *)local_98[1];
              }
              uVar7 = FUN_140e48e40(puVar16,uVar6);
              FUN_140e609c0(*(undefined8 *)*puVar16);
              goto LAB_1400644e4;
            }
          }
          else {
            local_258 = 0x3b8;
            uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd0b8);
            iVar3 = FUN_140e851f0(uVar7,&DAT_1419df7b0,DAT_141955260,0);
            if (iVar3 != 0) {
              local_258 = 0x3ba;
              uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd0b8);
              uVar6 = FUN_140e4a740(uVar7);
              iVar3 = local_250;
              if (local_250 < 1) {
                puVar10 = &DAT_1419df7b0;
              }
              else {
                puVar10 = (undefined8 *)*local_98;
              }
              uVar7 = FUN_140e48e40(puVar10,uVar6);
              FUN_140e609c0(*(undefined8 *)*puVar10);
              FUN_140044220(uVar7,1);
              FUN_140e60910(1);
              local_258 = 0x3bb;
              uVar7 = FUN_140042490(local_res8,DAT_1419fd0b8);
              if (1 < iVar3) {
                puVar16 = (undefined8 *)local_98[1];
              }
              uVar6 = thunk_FUN_140e4a740(uVar7);
              uVar7 = FUN_1400442e0(puVar16,uVar6);
LAB_1400644e4:
              FUN_140044220(uVar7,1);
              FUN_140e60910(1);
            }
          }
          local_258 = 0x3be;
          break;
        case 2:
          local_258 = 0x3c2;
          if ((1 << (bVar1 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_288);
          }
          local_288 = 0;
          local_280 = 0;
          local_27c = 5;
          uVar7 = FUN_140042490(local_res8,DAT_1419fe428);
          uVar8 = FUN_140042490(local_res8,DAT_1419fe888);
          dVar20 = (double)FUN_140041980(uVar8);
          dVar21 = (double)FUN_140041980(uVar7);
          fVar18 = (float)FUN_140e793d0(0,0,(float)dVar21,(float)dVar20);
          FUN_140041cb0(&local_220,(double)(fVar18 * 0.011111111 + 0.5));
          local_238 = &local_220;
          uVar7 = FUN_140e634e0(local_res8,local_res10,&local_288,1,CONCAT44(uVar6,DAT_1419fe728),
                                &local_238);
          uVar7 = FUN_140041980(uVar7);
          uVar7 = FUN_1412a79b0(uVar7,0x4010000000000000);
          FUN_140041cb0(&local_160,uVar7);
          local_258 = 0x3c3;
          FUN_1400424f0(&local_278,&local_160);
          if ((*(int *)(pplVar13 + 3) < DAT_141ddc37c) &&
             (_Init_thread_header(&DAT_141ddc37c), DAT_141ddc37c == -1)) {
            FUN_140041c20(&DAT_141ddc4b0,0);
            DAT_141ddc4c0 = 0;
            FUN_140041c20(&DAT_141ddc4c4,1);
            _DAT_141ddc4d4 = 1;
            FUN_140041c20(&DAT_141ddc4d8,2);
            _DAT_141ddc4e8 = 2;
            FUN_140041c20(&DAT_141ddc4ec,3);
            _DAT_141ddc4fc = 3;
            atexit((_func_5014 *)&LAB_14145c8d0);
            _Init_thread_footer(&DAT_141ddc37c);
          }
          goto LAB_1400646c0;
        case 3:
          local_258 = 0x3e9;
          if ((1 << (bVar1 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_288);
          }
          local_288 = 0;
          local_280 = 0;
          local_27c = 5;
          uVar7 = FUN_140042490(local_res8,DAT_1419fe428);
          uVar8 = FUN_140042490(local_res8,DAT_1419fe888);
          dVar20 = (double)FUN_140041980(uVar8);
          dVar21 = (double)FUN_140041980(uVar7);
          fVar18 = (float)FUN_140e793d0(0,0,(float)dVar21,(float)dVar20);
          FUN_140041cb0(&local_220,(double)(fVar18 * 0.022222223 + 0.5));
          local_238 = &local_220;
          uVar7 = FUN_140e634e0(local_res8,local_res10,&local_288,1,CONCAT44(uVar6,DAT_1419fe728),
                                &local_238);
          uVar7 = FUN_140041980(uVar7);
          uVar7 = FUN_1412a79b0(uVar7,0x4020000000000000);
          FUN_140041cb0(&local_160,uVar7);
          local_258 = 0x3ea;
          FUN_1400424f0(&local_1e0,&local_160);
          if ((*(int *)(pplVar13 + 3) < DAT_141ddc3c0) &&
             (_Init_thread_header(&DAT_141ddc3c0), DAT_141ddc3c0 == -1)) {
            FUN_140041c20(&DAT_141ddc430,0);
            _DAT_141ddc440 = 0;
            FUN_140041c20(&DAT_141ddc444,1);
            _DAT_141ddc454 = 0;
            FUN_140041c20(&DAT_141ddc458,7);
            _DAT_141ddc468 = 0;
            FUN_140041c20(&DAT_141ddc46c,3);
            _DAT_141ddc47c = 1;
            FUN_140041c20(&DAT_141ddc480,4);
            _DAT_141ddc490 = 1;
            FUN_140041c20(&DAT_141ddc494,5);
            _DAT_141ddc4a4 = 1;
            atexit((_func_5014 *)&LAB_14145c8b0);
            _Init_thread_footer(&DAT_141ddc3c0);
          }
          uVar15 = 0;
          goto LAB_140064ba0;
        case 4:
          local_258 = 0x41b;
          uVar7 = FUN_140042490(local_res8,DAT_1419fe238);
          uVar8 = FUN_140042490(local_res8,DAT_1419fe298);
          uVar12 = FUN_140046450(&local_248,uVar8,uVar7);
          FUN_140041980(&local_1c0);
          uVar19 = FUN_140e78d00();
          uVar19 = FUN_140053900(&local_1e0,uVar19,uVar7);
          uVar12 = FUN_140046760(&local_278,uVar19,uVar12);
          uVar12 = FUN_140041980(uVar12);
          dVar20 = (double)FUN_140e78ec0(uVar12,0,0x3ff0000000000000);
          FUN_140041980(&local_1c0);
          dVar21 = (double)FUN_140e79500();
          FUN_140041cb0(&local_120,dVar20 * dVar21);
          FUN_140041b30(&local_278);
          FUN_140041b30(&local_1e0);
          FUN_140041b30(&local_248);
          local_258 = 0x41c;
          uVar8 = FUN_140046450(local_1f0,uVar8,uVar7);
          FUN_140041980(&local_1d0);
          uVar12 = FUN_140e78d00();
          uVar7 = FUN_140053900(&local_1e0,uVar12,uVar7);
          uVar7 = FUN_140046760(&local_278,uVar7,uVar8);
          uVar7 = FUN_140041980(uVar7);
          dVar20 = (double)FUN_140e78ec0(uVar7,0,0x3ff0000000000000);
          FUN_140041980(&local_1d0);
          dVar21 = (double)FUN_140e79500();
          FUN_140041cb0(&local_130,dVar20 * dVar21);
          FUN_140041b30(&local_278);
          FUN_140041b30(&local_1e0);
          FUN_140041b30(local_1f0);
          local_258 = 0x41e;
          uVar7 = FUN_140042490(local_res8,DAT_1419fd0b8);
          cVar2 = FUN_140042730(uVar7,&DAT_1419df7b0);
          if (cVar2 == '\0') {
            iVar3 = local_250;
          }
          else {
            local_258 = 0x420;
            if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_288);
            }
            local_288 = 0;
            local_280 = 0;
            local_27c = 5;
            FUN_140042490(local_res8,DAT_1419fe238);
            FUN_140042490(local_res8,DAT_1419fe298);
            local_1f0[0] = (longlong **)FUN_140042490(local_res8,DAT_1419fd0b8);
            FUN_1400441d0(&local_220,&DAT_141dc5ff0);
            local_238 = &local_220;
            uVar22 = FUN_140041980(&local_1c0);
            uVar7 = FUN_140042540(&local_278,uVar22 ^ 0x8000000000000000);
            FUN_140041c60(local_210,uVar7);
            FUN_140041b30(&local_278);
            iVar3 = local_250;
            local_230 = local_210;
            if (local_250 < 1) {
              puVar10 = &DAT_1419df7b0;
            }
            else {
              puVar10 = (undefined8 *)*local_98;
            }
            uVar7 = FUN_140e79090(&local_288,2,&local_238);
            uVar6 = thunk_FUN_140e4a740(local_1f0[0]);
            uVar8 = FUN_1400442e0(puVar10,uVar6);
            FUN_140041c60(uVar8,uVar7);
            FUN_140e60910(1);
            local_258 = 0x421;
            if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_288);
            }
            local_288 = 0;
            local_280 = 0;
            local_27c = 5;
            local_1f0[0] = (longlong **)FUN_140042490(local_res8,DAT_1419fd0b8);
            FUN_1400441d0(&local_220,&DAT_141dc5ff0);
            local_238 = &local_220;
            uVar22 = FUN_140041980(&local_120);
            uVar7 = FUN_140042540(&local_278,uVar22 ^ 0x8000000000000000);
            FUN_140041c60(local_210,uVar7);
            FUN_140041b30(&local_278);
            local_230 = local_210;
            if (iVar3 < 2) {
              puVar10 = &DAT_1419df7b0;
            }
            else {
              puVar10 = (undefined8 *)local_98[1];
            }
            uVar7 = FUN_140e79090(&local_288,2,&local_238);
            uVar6 = thunk_FUN_140e4a740(local_1f0[0]);
            uVar8 = FUN_1400442e0(puVar10,uVar6);
            FUN_140041c60(uVar8,uVar7);
            FUN_140e60910(1);
          }
          local_258 = 0x424;
          uVar7 = FUN_140042490(local_res8,DAT_1419fd108);
          cVar2 = FUN_140042730(uVar7,&DAT_1419df7b0);
          if (cVar2 != '\0') {
            local_258 = 0x426;
            if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_288);
            }
            local_288 = 0;
            local_280 = 0;
            local_27c = 5;
            local_1f0[0] = (longlong **)FUN_140042490(local_res8,DAT_1419fd108);
            FUN_1400441d0(&local_220,&DAT_141dc5ff0);
            local_238 = &local_220;
            uVar22 = FUN_140041980(&local_1d0);
            uVar7 = FUN_140042540(&local_278,uVar22 ^ 0x8000000000000000);
            FUN_140041c60(local_210,uVar7);
            FUN_140041b30(&local_278);
            local_230 = local_210;
            if (iVar3 < 1) {
              puVar10 = &DAT_1419df7b0;
            }
            else {
              puVar10 = (undefined8 *)*local_98;
            }
            uVar7 = FUN_140e79090(&local_288,2,&local_238);
            uVar6 = thunk_FUN_140e4a740(local_1f0[0]);
            uVar8 = FUN_1400442e0(puVar10,uVar6);
            FUN_140041c60(uVar8,uVar7);
            FUN_140e60910(1);
            local_258 = 0x427;
            if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_288);
            }
            local_288 = 0;
            local_280 = 0;
            local_27c = 5;
            local_1f0[0] = (longlong **)FUN_140042490(local_res8,DAT_1419fd108);
            FUN_1400441d0(&local_220,&DAT_141dc5ff0);
            local_238 = &local_220;
            uVar22 = FUN_140041980(&local_130);
            uVar7 = FUN_140042540(&local_278,uVar22 ^ 0x8000000000000000);
            FUN_140041c60(local_210,uVar7);
            FUN_140041b30(&local_278);
            local_230 = local_210;
            if (iVar3 < 2) {
              puVar10 = &DAT_1419df7b0;
            }
            else {
              puVar10 = (undefined8 *)local_98[1];
            }
            uVar7 = FUN_140e79090(&local_288,2,&local_238);
            uVar6 = thunk_FUN_140e4a740(local_1f0[0]);
            uVar8 = FUN_1400442e0(puVar10,uVar6);
            FUN_140041c60(uVar8,uVar7);
            FUN_140e60910(1);
          }
          local_258 = 0x42a;
          uVar7 = FUN_140042490(local_res8,DAT_1419fd008);
          cVar2 = FUN_140042730(uVar7,&DAT_1419df7b0);
          if (cVar2 != '\0') {
            local_258 = 0x42c;
            if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_288);
            }
            local_288 = 0;
            local_280 = 0;
            local_27c = 5;
            local_1f0[0] = (longlong **)FUN_140042490(local_res8,DAT_1419fd008);
            FUN_1400441d0(&local_220,&DAT_141dc5ff0);
            local_238 = &local_220;
            local_230 = &local_1c0;
            if (iVar3 < 1) {
              puVar10 = &DAT_1419df7b0;
            }
            else {
              puVar10 = (undefined8 *)*local_98;
            }
            uVar7 = FUN_140e79090(&local_288,2,&local_238);
            uVar6 = thunk_FUN_140e4a740(local_1f0[0]);
            uVar8 = FUN_1400442e0(puVar10,uVar6);
            FUN_140041c60(uVar8,uVar7);
            FUN_140e60910(1);
            local_258 = 0x42d;
            if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_288);
            }
            local_288 = 0;
            local_280 = 0;
            local_27c = 5;
            local_1f0[0] = (longlong **)FUN_140042490(local_res8,DAT_1419fd008);
            FUN_1400441d0(&local_220,&DAT_141dc5ff0);
            local_238 = &local_220;
            local_230 = &local_120;
            if (iVar3 < 2) {
              puVar10 = &DAT_1419df7b0;
            }
            else {
              puVar10 = (undefined8 *)local_98[1];
            }
            uVar7 = FUN_140e79090(&local_288,2,&local_238);
            uVar6 = thunk_FUN_140e4a740(local_1f0[0]);
            uVar8 = FUN_1400442e0(puVar10,uVar6);
            FUN_140041c60(uVar8,uVar7);
            FUN_140e60910(1);
          }
          local_258 = 0x430;
          uVar7 = FUN_140042490(local_res8,DAT_1419fcfd8);
          cVar2 = FUN_140042730(uVar7,&DAT_1419df7b0);
          if (cVar2 != '\0') {
            local_258 = 0x432;
            if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_288);
            }
            local_288 = 0;
            local_280 = 0;
            local_27c = 5;
            local_1f0[0] = (longlong **)FUN_140042490(local_res8,DAT_1419fcfd8);
            FUN_1400441d0(&local_220,&DAT_141dc5ff0);
            local_238 = &local_220;
            local_230 = &local_1d0;
            if (iVar3 < 1) {
              puVar10 = &DAT_1419df7b0;
            }
            else {
              puVar10 = (undefined8 *)*local_98;
            }
            uVar7 = FUN_140e79090(&local_288,2,&local_238);
            uVar6 = thunk_FUN_140e4a740(local_1f0[0]);
            uVar8 = FUN_1400442e0(puVar10,uVar6);
            FUN_140041c60(uVar8,uVar7);
            FUN_140e60910(1);
            local_258 = 0x433;
            if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_288);
            }
            local_288 = 0;
            local_280 = 0;
            local_27c = 5;
            uVar7 = FUN_140042490(local_res8,DAT_1419fcfd8);
            FUN_1400441d0(&local_220,&DAT_141dc5ff0);
            local_238 = &local_220;
            local_230 = &local_130;
            if (1 < iVar3) {
              puVar16 = (undefined8 *)local_98[1];
            }
            uVar8 = FUN_140e79090(&local_288,2,&local_238);
            uVar6 = thunk_FUN_140e4a740(uVar7);
            uVar7 = FUN_1400442e0(puVar16,uVar6);
            FUN_140041c60(uVar7,uVar8);
            FUN_140e60910(1);
          }
          local_258 = 0x435;
          break;
        case 5:
          local_258 = 0x43a;
          uVar7 = FUN_140042490(local_res8,DAT_1419fd0b8);
          cVar2 = FUN_140042730(uVar7,&DAT_1419df7b0);
          if (cVar2 == '\0') {
            iVar3 = local_250;
          }
          else {
            local_258 = 0x43c;
            if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_288);
            }
            local_288 = 0;
            local_280 = 0;
            local_27c = 5;
            local_1f0[0] = (longlong **)FUN_140042490(local_res8,DAT_1419fd0b8);
            uVar7 = FUN_140042490(local_res8,DAT_1419fe428);
            local_248 = uVar7;
            FUN_1400441d0(&local_220,&DAT_141dc5ff0);
            local_238 = &local_220;
            uVar22 = FUN_140041980(uVar7);
            uVar7 = FUN_140042540(&local_278,uVar22 ^ 0x8000000000000000);
            FUN_140041c60(local_210,uVar7);
            FUN_140041b30(&local_278);
            iVar3 = local_250;
            local_230 = local_210;
            if (local_250 < 1) {
              puVar10 = &DAT_1419df7b0;
            }
            else {
              puVar10 = (undefined8 *)*local_98;
            }
            uVar7 = FUN_140e79090(&local_288,2,&local_238);
            uVar6 = thunk_FUN_140e4a740(local_1f0[0]);
            uVar8 = FUN_1400442e0(puVar10,uVar6);
            FUN_140041c60(uVar8,uVar7);
            FUN_140e60910(1);
            local_258 = 0x43d;
            if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_288);
            }
            local_288 = 0;
            local_280 = 0;
            local_27c = 5;
            local_1f0[0] = (longlong **)FUN_140042490(local_res8,DAT_1419fd0b8);
            FUN_1400441d0(&local_220,&DAT_141dc5ff0);
            local_238 = &local_220;
            uVar22 = FUN_140041980(local_248);
            uVar7 = FUN_140042540(&local_278,uVar22 ^ 0x8000000000000000);
            FUN_140041c60(local_210,uVar7);
            FUN_140041b30(&local_278);
            local_230 = local_210;
            if (iVar3 < 2) {
              puVar10 = &DAT_1419df7b0;
            }
            else {
              puVar10 = (undefined8 *)local_98[1];
            }
            uVar7 = FUN_140e79090(&local_288,2,&local_238);
            uVar6 = thunk_FUN_140e4a740(local_1f0[0]);
            uVar8 = FUN_1400442e0(puVar10,uVar6);
            FUN_140041c60(uVar8,uVar7);
            FUN_140e60910(1);
          }
          local_258 = 0x440;
          uVar7 = FUN_140042490(local_res8,DAT_1419fd108);
          cVar2 = FUN_140042730(uVar7,&DAT_1419df7b0);
          if (cVar2 != '\0') {
            local_258 = 0x442;
            if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_288);
            }
            local_288 = 0;
            local_280 = 0;
            local_27c = 5;
            local_248 = FUN_140042490(local_res8,DAT_1419fd108);
            pplVar13 = (longlong **)FUN_140042490(local_res8,DAT_1419fe888);
            local_1f0[0] = pplVar13;
            FUN_1400441d0(&local_220,&DAT_141dc5ff0);
            local_238 = &local_220;
            uVar22 = FUN_140041980(pplVar13);
            uVar7 = FUN_140042540(&local_278,uVar22 ^ 0x8000000000000000);
            FUN_140041c60(local_210,uVar7);
            FUN_140041b30(&local_278);
            local_230 = local_210;
            if (iVar3 < 1) {
              puVar10 = &DAT_1419df7b0;
            }
            else {
              puVar10 = (undefined8 *)*local_98;
            }
            uVar7 = FUN_140e79090(&local_288,2,&local_238);
            uVar6 = thunk_FUN_140e4a740(local_248);
            uVar8 = FUN_1400442e0(puVar10,uVar6);
            FUN_140041c60(uVar8,uVar7);
            FUN_140e60910(1);
            local_258 = 0x443;
            if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_288);
            }
            local_288 = 0;
            local_280 = 0;
            local_27c = 5;
            local_248 = FUN_140042490(local_res8,DAT_1419fd108);
            FUN_1400441d0(&local_220,&DAT_141dc5ff0);
            local_238 = &local_220;
            uVar22 = FUN_140041980(local_1f0[0]);
            uVar7 = FUN_140042540(&local_278,uVar22 ^ 0x8000000000000000);
            FUN_140041c60(local_210,uVar7);
            FUN_140041b30(&local_278);
            local_230 = local_210;
            if (iVar3 < 2) {
              puVar10 = &DAT_1419df7b0;
            }
            else {
              puVar10 = (undefined8 *)local_98[1];
            }
            uVar7 = FUN_140e79090(&local_288,2,&local_238);
            uVar6 = thunk_FUN_140e4a740(local_248);
            uVar8 = FUN_1400442e0(puVar10,uVar6);
            FUN_140041c60(uVar8,uVar7);
            FUN_140e60910(1);
          }
          local_258 = 0x446;
          uVar7 = FUN_140042490(local_res8,DAT_1419fd008);
          cVar2 = FUN_140042730(uVar7,&DAT_1419df7b0);
          if (cVar2 != '\0') {
            local_258 = 0x448;
            if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_288);
            }
            local_288 = 0;
            local_280 = 0;
            local_27c = 5;
            local_248 = FUN_140042490(local_res8,DAT_1419fd008);
            pplVar13 = (longlong **)FUN_140042490(local_res8,DAT_1419fe428);
            local_1f0[0] = pplVar13;
            FUN_1400441d0(&local_220,&DAT_141dc5ff0);
            local_238 = &local_220;
            FUN_140041c60(local_210,pplVar13);
            local_230 = local_210;
            if (iVar3 < 1) {
              puVar10 = &DAT_1419df7b0;
            }
            else {
              puVar10 = (undefined8 *)*local_98;
            }
            uVar7 = FUN_140e79090(&local_288,2,&local_238);
            uVar6 = thunk_FUN_140e4a740(local_248);
            uVar8 = FUN_1400442e0(puVar10,uVar6);
            FUN_140041c60(uVar8,uVar7);
            FUN_140e60910(1);
            local_258 = 0x449;
            if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_288);
            }
            local_288 = 0;
            local_280 = 0;
            local_27c = 5;
            local_248 = FUN_140042490(local_res8,DAT_1419fd008);
            FUN_1400441d0(&local_220,&DAT_141dc5ff0);
            local_238 = &local_220;
            FUN_140041c60(local_210,local_1f0[0]);
            local_230 = local_210;
            if (iVar3 < 2) {
              puVar10 = &DAT_1419df7b0;
            }
            else {
              puVar10 = (undefined8 *)local_98[1];
            }
            uVar7 = FUN_140e79090(&local_288,2,&local_238);
            uVar6 = thunk_FUN_140e4a740(local_248);
            uVar8 = FUN_1400442e0(puVar10,uVar6);
            FUN_140041c60(uVar8,uVar7);
            FUN_140e60910(1);
          }
          local_258 = 0x44c;
          uVar7 = FUN_140042490(local_res8,DAT_1419fcfd8);
          cVar2 = FUN_140042730(uVar7,&DAT_1419df7b0);
          if (cVar2 != '\0') {
            local_258 = 0x44e;
            if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_288);
            }
            local_288 = 0;
            local_280 = 0;
            local_27c = 5;
            local_248 = FUN_140042490(local_res8,DAT_1419fcfd8);
            pplVar13 = (longlong **)FUN_140042490(local_res8,DAT_1419fe888);
            local_1f0[0] = pplVar13;
            FUN_1400441d0(&local_220,&DAT_141dc5ff0);
            local_238 = &local_220;
            FUN_140041c60(local_210,pplVar13);
            local_230 = local_210;
            if (iVar3 < 1) {
              puVar10 = &DAT_1419df7b0;
            }
            else {
              puVar10 = (undefined8 *)*local_98;
            }
            uVar7 = FUN_140e79090(&local_288,2,&local_238);
            uVar6 = thunk_FUN_140e4a740(local_248);
            uVar8 = FUN_1400442e0(puVar10,uVar6);
            FUN_140041c60(uVar8,uVar7);
            FUN_140e60910(1);
            local_258 = 0x44f;
            if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_288);
            }
            local_288 = 0;
            local_280 = 0;
            local_27c = 5;
            uVar7 = FUN_140042490(local_res8,DAT_1419fcfd8);
            FUN_1400441d0(&local_220,&DAT_141dc5ff0);
            local_238 = &local_220;
            FUN_140041c60(local_210,local_1f0[0]);
            local_230 = local_210;
            if (1 < iVar3) {
              puVar16 = (undefined8 *)local_98[1];
            }
            uVar8 = FUN_140e79090(&local_288,2,&local_238);
            uVar6 = thunk_FUN_140e4a740(uVar7);
            uVar7 = FUN_1400442e0(puVar16,uVar6);
            FUN_140041c60(uVar7,uVar8);
            FUN_140e60910(1);
          }
          local_258 = 0x451;
        }
        break;
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < 6);
    goto switchD_140063f13_default;
  }
  goto LAB_140066097;
  while (uVar15 = uVar15 + 1, uVar15 < 6) {
LAB_140064ba0:
    cVar2 = FUN_140041d70(&DAT_141ddc430 + (longlong)(int)uVar15 * 0x14,&local_1e0);
    if (cVar2 != '\0') {
      if (*(int *)(&DAT_141ddc440 + (longlong)(int)uVar15 * 0x14) == 0) {
        local_258 = 0x3ef;
        uVar7 = FUN_140042490(local_res8,DAT_1419fd008);
        cVar2 = FUN_140042730(uVar7,&DAT_1419df7b0);
        if (cVar2 == '\0') break;
        local_258 = 0x3f1;
        uVar7 = FUN_140042490(local_res8,DAT_1419fd008);
        iVar3 = local_250;
        if (local_250 < 1) {
          puVar10 = &DAT_1419df7b0;
        }
        else {
          puVar10 = (undefined8 *)*local_98;
        }
        uVar6 = thunk_FUN_140e4a740(uVar7);
        uVar7 = FUN_1400442e0(puVar10,uVar6);
        FUN_140044220(uVar7,1);
        FUN_140e60910(1);
        local_258 = 0x3f2;
        uVar6 = DAT_1419fd008;
      }
      else {
        if (*(int *)(&DAT_141ddc440 + (longlong)(int)uVar15 * 0x14) != 1) break;
        local_258 = 0x3f9;
        uVar7 = FUN_140042490(local_res8,DAT_1419fd0b8);
        cVar2 = FUN_140042730(uVar7,&DAT_1419df7b0);
        if (cVar2 == '\0') break;
        local_258 = 0x3fb;
        uVar7 = FUN_140042490(local_res8,DAT_1419fd0b8);
        iVar3 = local_250;
        if (local_250 < 1) {
          puVar10 = &DAT_1419df7b0;
        }
        else {
          puVar10 = (undefined8 *)*local_98;
        }
        uVar6 = thunk_FUN_140e4a740(uVar7);
        uVar7 = FUN_1400442e0(puVar10,uVar6);
        FUN_140044220(uVar7,1);
        FUN_140e60910(1);
        local_258 = 0x3fc;
        uVar6 = DAT_1419fd0b8;
      }
      uVar7 = FUN_140042490(local_res8,uVar6);
      if (iVar3 < 2) {
        puVar10 = &DAT_1419df7b0;
      }
      else {
        puVar10 = (undefined8 *)local_98[1];
      }
      uVar6 = thunk_FUN_140e4a740(uVar7);
      uVar7 = FUN_1400442e0(puVar10,uVar6);
      FUN_140044220(uVar7,1);
      FUN_140e60910(1);
      goto LAB_140064bce;
    }
  }
  iVar3 = local_250;
LAB_140064bce:
  local_258 = 0x401;
  FUN_1400424f0(&local_278,&local_160);
  if ((*(int *)(pplVar13 + 3) < DAT_141ddc3c4) &&
     (_Init_thread_header(&DAT_141ddc3c4), DAT_141ddc3c4 == -1)) {
    FUN_140041c20(&DAT_141ddc280,1);
    DAT_141ddc290 = 0;
    FUN_140041c20(&DAT_141ddc294,2);
    _DAT_141ddc2a4 = 0;
    FUN_140041c20(&DAT_141ddc2a8,3);
    _DAT_141ddc2b8 = 0;
    FUN_140041c20(&DAT_141ddc2bc,5);
    _DAT_141ddc2cc = 1;
    FUN_140041c20(&DAT_141ddc2d0,6);
    _DAT_141ddc2e0 = 1;
    FUN_140041c20(&DAT_141ddc2e4,7);
    _DAT_141ddc2f4 = 1;
    atexit((_func_5014 *)&LAB_14145c890);
    _Init_thread_footer(&DAT_141ddc3c4);
  }
  do {
    cVar2 = FUN_140041d70(&DAT_141ddc280 + (longlong)(int)uVar17 * 0x14,&local_278);
    if (cVar2 != '\0') {
      if ((&DAT_141ddc290)[(longlong)(int)uVar17 * 5] == 0) {
        local_258 = 0x406;
        uVar7 = FUN_140042490(local_res8,DAT_1419fd108);
        cVar2 = FUN_140042730(uVar7,&DAT_1419df7b0);
        if (cVar2 == '\0') break;
        local_258 = 0x408;
        uVar7 = FUN_140042490(local_res8,DAT_1419fd108);
        if (iVar3 < 1) {
          puVar10 = &DAT_1419df7b0;
        }
        else {
          puVar10 = (undefined8 *)*local_98;
        }
        uVar6 = thunk_FUN_140e4a740(uVar7);
        uVar7 = FUN_1400442e0(puVar10,uVar6);
        FUN_140044220(uVar7,1);
        FUN_140e60910(1);
        local_258 = 0x409;
        uVar6 = DAT_1419fd108;
      }
      else {
        if ((&DAT_141ddc290)[(longlong)(int)uVar17 * 5] != 1) break;
        local_258 = 0x410;
        uVar7 = FUN_140042490(local_res8,DAT_1419fcfd8);
        cVar2 = FUN_140042730(uVar7,&DAT_1419df7b0);
        if (cVar2 == '\0') break;
        local_258 = 0x412;
        uVar7 = FUN_140042490(local_res8,DAT_1419fcfd8);
        if (iVar3 < 1) {
          puVar10 = &DAT_1419df7b0;
        }
        else {
          puVar10 = (undefined8 *)*local_98;
        }
        uVar6 = thunk_FUN_140e4a740(uVar7);
        uVar7 = FUN_1400442e0(puVar10,uVar6);
        FUN_140044220(uVar7,1);
        FUN_140e60910(1);
        local_258 = 0x413;
        uVar6 = DAT_1419fcfd8;
      }
      uVar7 = FUN_140042490(local_res8,uVar6);
      if (1 < iVar3) {
        puVar16 = (undefined8 *)local_98[1];
      }
      uVar6 = thunk_FUN_140e4a740(uVar7);
      uVar7 = FUN_1400442e0(puVar16,uVar6);
      FUN_140044220(uVar7,1);
      FUN_140e60910(1);
      break;
    }
    uVar17 = uVar17 + 1;
  } while (uVar17 < 6);
  local_258 = 0x417;
  FUN_140041b30(&local_278);
  FUN_140041b30(&local_1e0);
  goto switchD_140063f13_default;
  while (uVar17 = uVar17 + 1, uVar17 < 4) {
LAB_1400646c0:
    cVar2 = FUN_140041d70(&DAT_141ddc4b0 + (longlong)(int)uVar17 * 0x14,&local_278);
    if (cVar2 != '\0') {
      iVar3 = (&DAT_141ddc4c0)[(longlong)(int)uVar17 * 5];
      if (iVar3 == 0) {
        local_258 = 0x3c6;
        uVar7 = FUN_140042490(local_res8,DAT_1419fd008);
        cVar2 = FUN_140042730(uVar7,&DAT_1419df7b0);
        if (cVar2 == '\0') break;
        local_258 = 0x3c8;
        uVar7 = FUN_140042490(local_res8,DAT_1419fd008);
        iVar3 = local_250;
        if (local_250 < 1) {
          puVar10 = &DAT_1419df7b0;
        }
        else {
          puVar10 = (undefined8 *)*local_98;
        }
        uVar6 = thunk_FUN_140e4a740(uVar7);
        uVar7 = FUN_1400442e0(puVar10,uVar6);
        FUN_140044220(uVar7,1);
        FUN_140e60910(1);
        local_258 = 0x3c9;
        uVar6 = DAT_1419fd008;
      }
      else if (iVar3 == 1) {
        local_258 = 0x3ce;
        uVar7 = FUN_140042490(local_res8,DAT_1419fd108);
        cVar2 = FUN_140042730(uVar7,&DAT_1419df7b0);
        if (cVar2 == '\0') break;
        local_258 = 0x3d0;
        uVar7 = FUN_140042490(local_res8,DAT_1419fd108);
        iVar3 = local_250;
        if (local_250 < 1) {
          puVar10 = &DAT_1419df7b0;
        }
        else {
          puVar10 = (undefined8 *)*local_98;
        }
        uVar6 = thunk_FUN_140e4a740(uVar7);
        uVar7 = FUN_1400442e0(puVar10,uVar6);
        FUN_140044220(uVar7,1);
        FUN_140e60910(1);
        local_258 = 0x3d1;
        uVar6 = DAT_1419fd108;
      }
      else if (iVar3 == 2) {
        local_258 = 0x3d6;
        uVar7 = FUN_140042490(local_res8,DAT_1419fd0b8);
        cVar2 = FUN_140042730(uVar7,&DAT_1419df7b0);
        if (cVar2 == '\0') break;
        local_258 = 0x3d8;
        uVar7 = FUN_140042490(local_res8,DAT_1419fd0b8);
        iVar3 = local_250;
        if (local_250 < 1) {
          puVar10 = &DAT_1419df7b0;
        }
        else {
          puVar10 = (undefined8 *)*local_98;
        }
        uVar6 = thunk_FUN_140e4a740(uVar7);
        uVar7 = FUN_1400442e0(puVar10,uVar6);
        FUN_140044220(uVar7,1);
        FUN_140e60910(1);
        local_258 = 0x3d9;
        uVar6 = DAT_1419fd0b8;
      }
      else {
        if (iVar3 != 3) break;
        local_258 = 0x3de;
        uVar7 = FUN_140042490(local_res8,DAT_1419fcfd8);
        cVar2 = FUN_140042730(uVar7,&DAT_1419df7b0);
        if (cVar2 == '\0') break;
        local_258 = 0x3e0;
        uVar7 = FUN_140042490(local_res8,DAT_1419fcfd8);
        iVar3 = local_250;
        if (local_250 < 1) {
          puVar10 = &DAT_1419df7b0;
        }
        else {
          puVar10 = (undefined8 *)*local_98;
        }
        uVar6 = thunk_FUN_140e4a740(uVar7);
        uVar7 = FUN_1400442e0(puVar10,uVar6);
        FUN_140044220(uVar7,1);
        FUN_140e60910(1);
        local_258 = 0x3e1;
        uVar6 = DAT_1419fcfd8;
      }
      uVar7 = FUN_140042490(local_res8,uVar6);
      if (1 < iVar3) {
        puVar16 = (undefined8 *)local_98[1];
      }
      uVar6 = thunk_FUN_140e4a740(uVar7);
      uVar7 = FUN_1400442e0(puVar16,uVar6);
      FUN_140044220(uVar7,1);
      FUN_140e60910(1);
      break;
    }
  }
  local_258 = 0x3e5;
  FUN_140041b30(&local_278);
switchD_140063f13_default:
  FUN_140041b30(local_1b0);
LAB_140066097:
  FUN_140041b30(local_90);
  puVar16 = local_res18;
LAB_140066120:
  FUN_140041b30(&local_288);
  FUN_140041b30(&local_130);
  FUN_140041b30(&local_120);
  FUN_140041b30(&local_160);
  FUN_140041b30(&local_f0);
  FUN_140041b30(&local_e0);
  FUN_140041b30(&local_d0);
  FUN_140041b30(&local_c0);
  FUN_140041b30(&local_110);
  FUN_140041b30(&local_180);
  FUN_140041b30(&local_170);
  FUN_140041b30(&local_150);
  FUN_140041b30(&local_1a0);
  FUN_140041b30(&local_1d0);
  FUN_140041b30(&local_1c0);
  FUN_140041b30(&local_b0);
  FUN_140041b30(&local_100);
  FUN_140041b30(&local_140);
  FUN_140041b30(&local_190);
  _eh_vector_destructor_iterator_(&local_220,0x10,3,FUN_140041b30);
  FUN_140041f30(local_a0);
  FUN_140041970(&local_268);
  return puVar16;
}

